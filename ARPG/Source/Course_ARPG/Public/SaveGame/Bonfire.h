
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bonfire.generated.h"

class AARPG_PlayerController;
class UBonfireInteractionText;
class UWidgetComponent;
class USphereComponent;
class UBoxComponent;

UCLASS()
class COURSE_ARPG_API ABonfire : public AActor
{
	GENERATED_BODY()
	
public:	

	ABonfire();

	virtual void Tick(float DeltaSeconds) override;

	FString GetBonfireName();

	bool GetIsFirstTimeUsed();

	void SetIsFirstTimeUsed(bool NewIsFirstTimeUsed);
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UPROPERTY(EditAnywhere)
	UWidgetComponent* InteractionWidgetComponent;
	
private:

	UFUNCTION()
	void ChangeWidgetVisibility(bool bIsVisible);
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BonfireMesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BonfireCollision;

	UPROPERTY(EditAnywhere)
	USphereComponent* InteractionRangeCollision;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UBonfireInteractionText> InteractionWidgetClass;

	UPROPERTY()
	UBonfireInteractionText* InteractionWidgetRef;

	UPROPERTY()
	AARPG_PlayerController* PlayerController;

	UPROPERTY(EditAnywhere)
	FString BonfireName;

	bool bIsFirstTimeUsed = true;
};
