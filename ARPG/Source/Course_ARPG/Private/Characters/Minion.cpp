
#include "Characters/Minion.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/StatsComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Perception/PawnSensingComponent.h"
#include "UI/BossHealthBar.h"
#include "UI/EnemyHealthBar.h"


AMinion::AMinion()
{
	PrimaryActorTick.bCanEverTick = true;
	
	HealthBarWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarWidget"));
	HealthBarWidgetComponent -> SetupAttachment(GetRootComponent());
}


void AMinion::BeginPlay()
{
	Super::BeginPlay();

	if (HealthBarWidgetClass)
	{
		HealthBarWidgetComponent->SetWidgetClass(HealthBarWidgetClass);
		HealthBarWidgetRef = Cast<UEnemyHealthBar>(HealthBarWidgetComponent->GetWidget());
		if (HealthBarWidgetRef)
		{
			HealthBarWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
			StatsComp->OnHealthPercentUpdateDelegate.AddDynamic(HealthBarWidgetRef, &UEnemyHealthBar::SetHealth);
		}
	}
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
	if (BlackboardComp)
	{
		EEnemyStates CurrentState = static_cast<EEnemyStates>(BlackboardComp->GetValueAsEnum(TEXT("CurrentState")));
		if (DetectedPawn != PawnToDetect || (CurrentState != EEnemyStates::Patrol && CurrentState != EEnemyStates::GoingBack))
		{
			return;
		}
		BlackboardComp->SetValueAsBool(TEXT("IsPatrolling"), false);
		BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), NewEnemyState);
	}
}

