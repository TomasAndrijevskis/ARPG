
#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ARPG_GameInstance.generated.h"

UCLASS()
class COURSE_ARPG_API UARPG_GameInstance : public UGameInstance
{
	GENERATED_BODY()


public:

	UARPG_GameInstance(){};

	UFUNCTION(BlueprintCallable)
	void SetSlotName(FString NewSlotName);

	UFUNCTION(BlueprintCallable)
	FString GetSlotName();
	
	UFUNCTION(BlueprintCallable)
	void SaveGame();

	UFUNCTION(BlueprintCallable)
	void LoadGame();

	UFUNCTION(BlueprintCallable)
	void InitializeGameInstance();

	UFUNCTION(BlueprintCallable)
	bool bCheckSlot(FString SlotNameToCheck);
	
private:

	FString SlotName = FString("Slot1");

	class AMainCharacter* CharacterRef;
	
};
