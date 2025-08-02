
#pragma once

#include "CoreMinimal.h"
#include "Characters/EnemyCharacter_Base.h"
#include "EnemyCharacter_Minion.generated.h"


class UWidgetComponent;

UCLASS()
class COURSE_ARPG_API AEnemyCharacter_Minion : public AEnemyCharacter_Base
{
	GENERATED_BODY()

public:
	
	AEnemyCharacter_Minion();

	UPROPERTY(BlueprintReadOnly)
	UEnemyHealthBar* HealthBarWidgetRef;

	virtual void Tick(float DeltaTime) override;

	virtual void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState) override;
	
protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UWidgetComponent* HealthBarWidgetComponent;
	
private:
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UEnemyHealthBar> HealthBarWidgetClass;

};
