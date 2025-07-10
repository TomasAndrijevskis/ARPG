
#include "Characters/EnemyCharacter_Mob.h"
#include "Characters/StatsComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "UI/BossHealthBar.h"
#include "UI/EnemyHealthBar.h"


AEnemyCharacter_Mob::AEnemyCharacter_Mob()
{
	PrimaryActorTick.bCanEverTick = true;
	
	HealthBarWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarWidget"));
	HealthBarWidgetComponent -> SetupAttachment(GetRootComponent());
}


void AEnemyCharacter_Mob::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	USceneComponent* TransformComp = CameraManager->GetTransformComponent();
	
	FVector TargetLocation = TransformComp->GetComponentLocation();
	FVector CurrentLocation = HealthBarWidgetComponent->GetComponentLocation();
	FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);
	
	HealthBarWidgetComponent->SetWorldRotation(NewRotation);

}


void AEnemyCharacter_Mob::BeginPlay()
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