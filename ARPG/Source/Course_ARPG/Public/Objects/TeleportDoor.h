
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeleportDoor.generated.h"

class AARPG_PlayerController;
class UObjectInteractionText;
class UWidgetComponent;
class UBoxComponent;

UCLASS()
class COURSE_ARPG_API ATeleportDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ATeleportDoor();

	virtual void Tick(float DeltaSeconds) override;
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


private:

	UFUNCTION()
	void SetupWidget();
	
	void ChangeWidgetVisibility(const bool bIsVisible) const;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* Collision;
	
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* InteractionArea;

	UPROPERTY(EditDefaultsOnly)
	UWidgetComponent* InteractionWidgetComponent;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UObjectInteractionText> InteractionWidgetClass;

	UPROPERTY(EditAnywhere)
	FString DoorName;

	UPROPERTY()
	AARPG_PlayerController* PlayerController;
};
