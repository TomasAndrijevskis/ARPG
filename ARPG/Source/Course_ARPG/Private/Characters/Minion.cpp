
#include "Characters/Minion.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/StatsComponent.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Perception/PawnSensingComponent.h"
#include "UI/BossHealthBar.h"
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
	USceneComponent* TransformComp = CameraManager->GetTransformComponent();
	
	FVector TargetLocation = TransformComp->GetComponentLocation();
	FVector CurrentLocation = HealthBarWidgetComponent->GetComponentLocation();
	FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);
	
	HealthBarWidgetComponent->SetWorldRotation(NewRotation);

}


void AMinion::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState)
{
	if (GetBlackboardComp())
	{
		EEnemyStates CurrentState = static_cast<EEnemyStates>(GetBlackboardComp()->GetValueAsEnum(TEXT("CurrentState")));
		if (DetectedPawn != PawnToDetect || (CurrentState != EEnemyStates::Patrol && CurrentState != EEnemyStates::GoingBack))
		{
			return;
		}
		GetBlackboardComp()->SetValueAsBool(TEXT("IsPatrolling"), false);
		GetBlackboardComp()->SetValueAsEnum(TEXT("CurrentState"), NewEnemyState);
	}
}


void AMinion::CreateHealthWidget()
{
	if (HealthBarWidgetClass)
	{
		HealthBarWidgetComponent->SetWidgetClass(HealthBarWidgetClass);
		HealthBarWidgetRef = Cast<UMinionHealthBar>(HealthBarWidgetComponent->GetWidget());
		if (HealthBarWidgetRef)
		{
			HealthBarWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
			StatsComp->OnHealthPercentUpdateDelegate.AddDynamic(HealthBarWidgetRef, &UMinionHealthBar::SetHealth);
		}
	}
}



UMinionHealthBar* AMinion::GetMinionWidget()
{
	return HealthBarWidgetRef;
}

