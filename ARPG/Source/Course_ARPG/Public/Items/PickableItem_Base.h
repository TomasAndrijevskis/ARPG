
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickableItem_Base.generated.h"

class AARPG_PlayerController;
class USphereComponent;
class UWidgetComponent;
class UBoxComponent;

DECLARE_MULTICAST_DELEGATE(FOnPickItemRequest);
UCLASS()
class COURSE_ARPG_API APickableItem_Base : public AActor
{
	GENERATED_BODY()
	
public:

	APickableItem_Base();

	int GetItemID() const;

	FOnPickItemRequest OnPickItemRequestDelegate;
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
private:

	void DestroyItem();
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* ObjectCollision;

	UPROPERTY(EditDefaultsOnly)
	USphereComponent* InteractionRange;
	
	UPROPERTY(EditDefaultsOnly)
	UWidgetComponent* InteractionWidget;
	
	UPROPERTY(EditDefaultsOnly)
	int ID;

	UPROPERTY()
	AARPG_PlayerController* PlayerController;
	
	UPROPERTY(EditDefaultsOnly)
	UDataTable* ItemsDataTable;
};