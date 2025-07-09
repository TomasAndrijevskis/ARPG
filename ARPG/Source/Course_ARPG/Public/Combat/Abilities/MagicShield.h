
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MagicShield.generated.h"

class USphereComponent;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS()
class COURSE_ARPG_API AMagicShield : public AActor
{
	GENERATED_BODY()
	
public:
	
	AMagicShield();
	
private:
	
	UPROPERTY(EditDefaultsOnly)
	USphereComponent* ShieldCollision;

	UPROPERTY(EditDefaultsOnly)
	UNiagaraComponent* MagicShield;
};
