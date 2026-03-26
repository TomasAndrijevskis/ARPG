
#include "Components/StatusEffectsComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


void UStatusEffectsComponent::BeginPlay()
{
	Super::BeginPlay();
	OnResistanceChangedDelegate.AddUObject(this, &UStatusEffectsComponent::SetDamageResistance);
	CharacterRef = Cast<ACharacter>(GetOwner());
	if (CharacterRef) SkeletalMeshComp = CharacterRef->GetMesh();
	HandleOwner();
	SetEffectType();
	SetVisualData();
}


void UStatusEffectsComponent::SetVisualData()
{
	if (!StatusEffectsVisualDataAsset || EffectType == EEffects::Empty) return;
	VisualEffectComponent = StatusEffectsVisualDataAsset->StatusEffects[EffectType].VisualEffect;
	Icon = StatusEffectsVisualDataAsset->StatusEffects[EffectType].Icon;
	DamageType = StatusEffectsVisualDataAsset->StatusEffects[EffectType].DamageType;
}


void UStatusEffectsComponent::HandleOwner()
{
	if (Cast<AMainCharacter_Base>(CharacterRef))
		OnStatusIconCreateRequestDelegate.AddUObject(Cast<AMainCharacter_Base>(CharacterRef), &AMainCharacter_Base::CreateStatusEffectIcon);
	if (Cast<AEnemyCharacter>(CharacterRef))
		OnStatusIconCreateRequestDelegate.AddUObject(Cast<AEnemyCharacter>(CharacterRef), &AEnemyCharacter::CreateStatusEffectIcon);
}


void UStatusEffectsComponent::HandleEffect()
{
	if (!VisualEffectComponent || !Icon || Resistance == 1) return;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (VisualEffectRef == nullptr)
	{
		VisualEffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				VisualEffectComponent,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator, VisualEffectScale,
				EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		OnStatusIconCreateRequestDelegate.Broadcast(Icon, this);
	}
	HandleDamageApplication();
}


void UStatusEffectsComponent::HandleDamageApplication()
{
	if (bIsProlongedDamage) GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UStatusEffectsComponent::ApplyProlongedDamage, DamageRate, true);
	else
	{
		GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UStatusEffectsComponent::StopEffect, Duration, true);
		ApplyDamage();
	}
}


void UStatusEffectsComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
}


void UStatusEffectsComponent::ApplyDamage()
{
	UGameplayStatics::ApplyDamage(CharacterRef, Damage, Cast<ACharacter>(GetOwner())->GetController(), nullptr, DamageType);
}


void UStatusEffectsComponent::ApplyProlongedDamage()
{
	if (Duration > 0)
	{
		if (!bIsOverlapping) Duration -= DamageRate;
		ApplyDamage();
	}
	else StopEffect();
}


void UStatusEffectsComponent::StopEffect()
{
	GetWorld()->GetTimerManager().ClearTimer(EffectTimerHandle);
	OnStatusIconRemoveRequestDelegate.Broadcast();
	if (VisualEffectRef)
	{
		VisualEffectRef->DestroyComponent();
		VisualEffectRef = nullptr;
	}
}


void UStatusEffectsComponent::SetDamageResistance(float NewResistance){Resistance = NewResistance;}

void UStatusEffectsComponent::SetParams(float NewDamage, float NewDuration, float NewDamageRate, bool NewIsProlongedDamage, bool NewIsOverlapping){Damage = NewDamage;Duration = NewDuration;DamageRate = NewDamageRate;bIsProlongedDamage = NewIsProlongedDamage;bIsOverlapping = NewIsOverlapping;}
