
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bonfire.generated.h"

class USphereComponent;
class UBoxComponent;

UCLASS()
class COURSE_ARPG_API ABonfire : public AActor
{
	GENERATED_BODY()
	
public:	

	ABonfire();

	virtual void Tick(float DeltaTime) override;
	
protected:

	virtual void BeginPlay() override;
	
	
private:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BonfireMesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BonfireCollision;

	UPROPERTY(EditAnywhere)
	USphereComponent* InteractionRangeCollision;
};
