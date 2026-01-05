

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossLocationDoor.generated.h"


class ABoss;
class UBoxComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBossDiedSignature);

UCLASS()
class COURSE_ARPG_API ABossLocationDoor : public AActor
{
	GENERATED_BODY()
	
public:

	ABossLocationDoor();

	UFUNCTION()
	void ReopenDoor();

	void CloseDoor();
	
	FOnBossDiedSignature OnBossDiedDelegate;
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	
private:

	UFUNCTION()
	void HandleDoor();
	
	void SetCollisionSettings(UBoxComponent& Collision, const ECollisionResponse OtherResponse, const ECollisionResponse CamVisResponse, const ECollisionResponse PlayerResponse);
	
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* BlockCollision;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* TriggerCollision;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ECollisionChannel> CollisionChannel;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* MeshMaterial;
};
