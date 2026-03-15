
#include "Characters/Enemy/Minion.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Data/EStats.h"
#include "Components/CombatComponent_Enemy.h"
#include "Components/StatsComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "UI/MinionHealthBar.h"


AMinion::AMinion()
{
	PrimaryActorTick.bCanEverTick = true;
	HealthBarWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarWidget"));
	HealthBarWidgetComponent->SetupAttachment(GetRootComponent());
	CombatComp = CreateDefaultSubobject<UCombatComponent_Enemy>(TEXT("Combat Component"));
}


void AMinion::BeginPlay()
{
	Super::BeginPlay();
	CreateHealthWidget();
}


void AMinion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	if (!CameraManager) return;
	USceneComponent* TransformComp = CameraManager->GetTransformComponent();
	if (!TransformComp) return;
	const FVector TargetLocation = TransformComp->GetComponentLocation();
	const FVector CurrentLocation = HealthBarWidgetComponent->GetComponentLocation();
	const FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);
	HealthBarWidgetComponent->SetWorldRotation(NewRotation);
}


void AMinion::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState)
{
	if (GetBlackboardComp())
	{
		EEnemyStates CurrentState = static_cast<EEnemyStates>(GetBlackboardComp()->GetValueAsEnum(TEXT("CurrentState")));
		if (DetectedPawn != PawnToDetect || (CurrentState != EEnemyStates::Patrol && CurrentState != EEnemyStates::GoingBack && CurrentState != EEnemyStates::Idle)) return;
		GetBlackboardComp()->SetValueAsBool(TEXT("IsPatrolling"), false);
		GetBlackboardComp()->SetValueAsEnum(TEXT("CurrentState"), NewEnemyState);
	}
}


void AMinion::CreateHealthWidget()
{
	if (HealthBarWidgetClass)
	{
		HealthBarWidgetComponent->SetWidgetClass(HealthBarWidgetClass);
		HealthBarWidgetComponent->SetCastShadow(false);
		HealthBarWidgetRef = Cast<UMinionHealthBar>(HealthBarWidgetComponent->GetWidget());
		if (HealthBarWidgetRef)
		{
			HealthBarWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
			StatsComp->OnHealthPercentUpdateDelegate.AddUObject(HealthBarWidgetRef, &UMinionHealthBar::SetHealth);
		}
	}
}


void AMinion::CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef)
{
	HealthBarWidgetRef->CreateStatusEffectIcon(Icon, StatusEffectsCompRef);
}


UMinionHealthBar* AMinion::GetMinionWidget() const{return HealthBarWidgetRef;}