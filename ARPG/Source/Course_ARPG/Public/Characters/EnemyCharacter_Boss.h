

#pragma once

#include "CoreMinimal.h"
#include "Characters/EnemyCharacter_Base.h"
#include "EnemyCharacter_Boss.generated.h"

class UEnemyProjectileComponent;
class UBossHealthBar;

UCLASS()
class COURSE_ARPG_API AEnemyCharacter_Boss : public AEnemyCharacter_Base
{
	GENERATED_BODY()
	
public:
	
	AEnemyCharacter_Boss();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UEnemyProjectileComponent* ProjectileComp;

	UPROPERTY(BlueprintReadOnly)
	UBossHealthBar* HealthBarWidgetRef;
	
	virtual void CreateHealthWidget() override;

	virtual void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState) override;
	
protected:

	virtual void HandleDeath() override;
private:
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBossHealthBar> HealthBarWidget;
};
