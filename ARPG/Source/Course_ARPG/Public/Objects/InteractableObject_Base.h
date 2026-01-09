
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableObject_Base.generated.h"


class AARPG_PlayerController;
class UObjectInteractionText;
class UWidgetComponent;
class USphereComponent;
class UBoxComponent;

UCLASS()
class COURSE_ARPG_API AInteractableObject_Base : public AActor
{
	GENERATED_BODY()
	
public:
	
	AInteractableObject_Base();

	virtual void Tick(float DeltaTime) override;
	
protected:
	
	virtual void BeginPlay() override;
	
	UFUNCTION()
	virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	virtual void SetupWidget() const;
	
	UPROPERTY(EditAnywhere)
	UWidgetComponent* InteractionWidgetComponent;

	UPROPERTY()
	AARPG_PlayerController* PlayerController;

	UPROPERTY(EditAnywhere)
	FString InteractionKey;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ObjectMesh;

private:
	
	UFUNCTION()
	void ChangeWidgetVisibility(const bool bIsVisible) const;
	
	UPROPERTY(EditAnywhere)
	UBoxComponent* ObjectCollision;

	UPROPERTY(EditAnywhere)
	USphereComponent* InteractionRange;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UObjectInteractionText> InteractionWidgetClass;
};
