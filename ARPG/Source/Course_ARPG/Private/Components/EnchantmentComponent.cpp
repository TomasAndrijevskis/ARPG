
#include "Components/EnchantmentComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/StatsComponent.h"
#include "Data/Enchantment/EnchantmentDataAsset.h"


void UEnchantmentComponent::BeginPlay()
{
	Super::BeginPlay();
	if (!EnchantmentData) return;
	SocketNames = EnchantmentData->SocketNames;
	EffectScale = EnchantmentData->Scale;
	CreateDefaultParticles(EnchantmentData->FXType);
	const FEnchantmentData* Data = EnchantmentData->EnchantmentData.Find(EEffects::Empty);
	ChangeParticle(Data ? Data->EnchantmentEffect : nullptr);
}


void UEnchantmentComponent::HandleEffectChange(EEffects NewEffect)
{
	if (CurrentEnchantmentEffect == NewEffect) return;
	if (!EnchantmentData) return;
	if (const FEnchantmentData* Data = EnchantmentData->EnchantmentData.Find(NewEffect))
	{
		CurrentEnchantmentEffect = NewEffect;
		CurrentEnchantmentDamageType = Data->DamageType;
		ChangeParticle(Data->EnchantmentEffect);
	}
}


void UEnchantmentComponent::CreateDefaultParticles(EEnchantmentFXType Type)
{
	if (ACharacter* Owner = Cast<ACharacter>(GetOwner()))
	{
		if (TObjectPtr<USkeletalMeshComponent> SkeletalMesh = Owner->GetMesh())
		{
			for (const FName& Socket : SocketNames)
			{
				if (Socket.IsNone() || !SkeletalMesh->DoesSocketExist(Socket)) continue;

				UFXSystemComponent* SpawnedComp = nullptr;

				switch (Type)
				{
				case EEnchantmentFXType::Cascade:
					SpawnedComp = NewObject<UParticleSystemComponent>(Owner);
					break;
				case EEnchantmentFXType::Niagara:
					SpawnedComp = NewObject<UNiagaraComponent>(Owner);
					break;
				}
				if (!SpawnedComp) continue;
				SpawnedComp->SetAutoActivate(false);
				SpawnedComp->SetupAttachment(SkeletalMesh, Socket);
				SpawnedComp->SetRelativeScale3D(EffectScale);
				Owner->AddInstanceComponent(SpawnedComp);
				SpawnedComp->RegisterComponent();
						
				ActiveEnchantmentEffects.Add(SpawnedComp);
			}
		}
	}
}


void UEnchantmentComponent::ChangeParticle(const TObjectPtr<UFXSystemAsset>& NewEnchantment)
{
	if (!NewEnchantment)
	{
		DeactivateEffect();
		return;
	}
	for (auto& Effect : ActiveEnchantmentEffects)
	{
		if (!Effect) continue;
		if (UNiagaraComponent* NiagaraComponent = Cast<UNiagaraComponent>(Effect))
		{
			if (UNiagaraSystem* Niagara = Cast<UNiagaraSystem>(NewEnchantment))
			{
				NiagaraComponent->SetAsset(Niagara, false);
				NiagaraComponent->ReinitializeSystem();
				NiagaraComponent->ActivateSystem(true);
			}
		}
		else if (UParticleSystemComponent* ParticleComponent = Cast<UParticleSystemComponent>(Effect))
		{
			if (UParticleSystem* Particle = Cast<UParticleSystem>(NewEnchantment))
			{
				ParticleComponent->SetTemplate(Particle);
				ParticleComponent->ActivateSystem(true);
			}
		}
	}
}


void UEnchantmentComponent::DeactivateEffect()
{
	for (auto& Effect: ActiveEnchantmentEffects)
	{
		if (IsValid(Effect)) Effect->Deactivate();
	}
}


float UEnchantmentComponent::GetEnchantedDamage(float DefaultDamage)
{
	if (IsWeaponEnchanted())
	{
		if (ACharacter* Owner = Cast<ACharacter>(GetOwner()))
		{
			if (UStatsComponent* StatsComp = Owner->FindComponentByClass<UStatsComponent>())
			{
				return DefaultDamage + DefaultDamage * StatsComp->GetStatValue(EStats::ElementalDamageModificator);
			}
			return DefaultDamage;
		}
		return DefaultDamage;
	}
	return DefaultDamage;
}