
#include "Characters/EnemyCharacter_Boss.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/UserWidget.h"
#include "Characters/StatsComponent.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"
#include "UI/BossHealthBar.h"


AEnemyCharacter_Boss::AEnemyCharacter_Boss()
{
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
}


void AEnemyCharacter_Boss::CreateHealthWidget()
{
	if (!HealthBarWidget)
	{
		return;
	}
	HealthBarWidgetRef = Cast<UBossHealthBar>(CreateWidget(GetWorld(), HealthBarWidget));
	HealthBarWidgetRef->AddToViewport();
	HealthBarWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
	StatsComp->OnHealthPercentUpdateDelegate.AddDynamic(HealthBarWidgetRef, &UBossHealthBar::SetHealth);
}


void AEnemyCharacter_Boss::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect)
{
	if (BlackboardComp)
	{
		EEnemyStates CurrentState = static_cast<EEnemyStates>(BlackboardComp->GetValueAsEnum(TEXT("CurrentState")));
		if (DetectedPawn != PawnToDetect || CurrentState != EEnemyStates::Idle)
		{
			return;
		}
		BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Range);
	}
}


void AEnemyCharacter_Boss::HandleDeath()
{
	Super::HandleDeath();

	HealthBarWidgetRef->RemoveFromParent();
}
