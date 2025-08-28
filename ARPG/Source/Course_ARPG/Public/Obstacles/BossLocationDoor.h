

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossLocationDoor.generated.h"

class UBoxComponent;

UCLASS()
class COURSE_ARPG_API ABossLocationDoor : public AActor
{
	GENERATED_BODY()
	
public:

	ABossLocationDoor();

	void ReopenDoor();

	void CloseDoor();

protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
private:

	void SetCollisionSettings(ECollisionResponse OtherResponse, ECollisionResponse CamVisResponse, ECollisionResponse PlayerResponse);
	
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* Collision;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ECollisionChannel> CollisionChannel;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* MeshMaterial;
};
