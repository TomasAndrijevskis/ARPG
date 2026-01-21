
#pragma once

#include "CoreMinimal.h"
#include "EnemyCharacter.h"
#include "Minion.generated.h"


class UMinionHealthBar;
class UWidgetComponent;

UCLASS()
class COURSE_ARPG_API AMinion : public AEnemyCharacter
{
	GENERATED_BODY()

public:
	
	AMinion();

	UPROPERTY(BlueprintReadOnly)
	UMinionHealthBar* HealthBarWidgetRef;

	virtual void Tick(float DeltaTime) override;

	virtual void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState) override;

	virtual void CreateHealthWidget() override;

	UMinionHealthBar* GetMinionWidget() const;
	
protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UWidgetComponent* HealthBarWidgetComponent;
	
private:
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UMinionHealthBar> HealthBarWidgetClass;

};
