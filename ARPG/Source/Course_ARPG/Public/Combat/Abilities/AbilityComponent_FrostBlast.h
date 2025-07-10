
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Combat/Abilities/AbilityComponent_Base.h"
#include "AbilityComponent_FrostBlast.generated.h"


class AFrostBlastRange;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_FrostBlast : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:	

	void SetDamage(float NewDamage);

	float GetDamage() const;
	
protected:

	virtual void BeginPlay() override;
	
private:

	UFUNCTION(BlueprintCallable)
	void StartAbility();

	UFUNCTION()
	void CompleteAbility();
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* InitialBlast;

	UPROPERTY(EditAnywhere)
	UParticleSystem* Warmup;

	UPROPERTY(EditAnywhere)
	FName SocketName; //ik_foot_root

	UPROPERTY()
	AFrostBlastRange* FrostBlastRangeActor;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> FrostBlastClass;

	UPROPERTY(EditAnywhere)
	float Damage;
	
	FVector SocketLocation;
		
};
