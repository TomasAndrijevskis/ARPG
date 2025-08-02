
#include "Characters/EnemyCharacter_Boss.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/UserWidget.h"
#include "Characters/StatsComponent.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Combat/TraceComponent.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"
#include "UI/BossHealthBar.h"


AEnemyCharacter_Boss::AEnemyCharacter_Boss()
{
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent_Enemy>(TEXT("Combat Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
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


void AEnemyCharacter_Boss::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState)
{
	if (BlackboardComp)
	{
		EEnemyStates CurrentState = static_cast<EEnemyStates>(BlackboardComp->GetValueAsEnum(TEXT("CurrentState")));
		if (DetectedPawn != PawnToDetect || CurrentState != EEnemyStates::Idle)
		{
			return;
		}
		BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), NewEnemyState);
	}
}


void AEnemyCharacter_Boss::HandleDeath()
{
	Super::HandleDeath();

	HealthBarWidgetRef->RemoveFromParent();
}
