
#pragma once

#include "CoreMinimal.h"
#include "InteractableObject_Base.h"
#include "Bonfire.generated.h"


UCLASS()
class COURSE_ARPG_API ABonfire : public AInteractableObject_Base
{
	GENERATED_BODY()
	
public:	
	
	FString GetBonfireName() const;

	FString GetMapName() const;

	bool IsFirstTimeUsed() const;

	void SetIsFirstTimeUsed(const bool NewIsFirstTimeUsed);
	
protected:
	
	virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult) override;
	
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
	
	virtual void SetupWidget() const override;
	
private:

	UPROPERTY(EditAnywhere)
	FString BonfireName;

	UPROPERTY(EditAnywhere)
	FString MapName;
	
	bool bIsFirstTimeUsed = true;
};
