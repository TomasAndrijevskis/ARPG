
#pragma once

#include "CoreMinimal.h"
#include "InteractableObject_Base.h"
#include "Data/SpawnPoint.h"
#include "Bonfire.generated.h"


UCLASS()
class COURSE_ARPG_API ABonfire : public AInteractableObject_Base
{
	GENERATED_BODY()
	
public:	
	
	const FString& GetBonfireName() const;

	const FName& GetMapName() const;
	
	bool IsFirstTimeUsed() const;

	void SetIsFirstTimeUsed(const bool NewIsFirstTimeUsed);

	virtual void OnInteract() override;
	
protected:
	
	virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult) override;
	
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
	
	virtual void SetupWidget() const override;

	virtual void BeginPlay() override;
	
private:
	
	UPROPERTY(EditInstanceOnly)
	FSpawnPoint SpawnPoint;
	
	bool bIsFirstTimeUsed = true;
};
