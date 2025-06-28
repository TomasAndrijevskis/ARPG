
#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ARPG_GameInstance.generated.h"

class AMainCharacter;

UCLASS()
class COURSE_ARPG_API UARPG_GameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	virtual void Init() override;
	
	UFUNCTION(BlueprintCallable)
	void SetSlotName(FString NewSlotName);

	UFUNCTION(BlueprintCallable)
	FString GetSlotName();
	
	UFUNCTION(BlueprintCallable)
	void SaveStats();

	UFUNCTION(BlueprintCallable)
	void LoadStats();

	UFUNCTION(BlueprintCallable)
	void SaveAbilities();

	UFUNCTION(BlueprintCallable)
	void LoadAbilities();
	
	UFUNCTION(BlueprintCallable)
	void SaveAll();
	
	UFUNCTION(BlueprintCallable)
	void InitializeGameInstance();

	UFUNCTION(BlueprintCallable)
	bool bCheckSlot(FString SlotNameToCheck);
	
	UFUNCTION(BlueprintCallable)
	void SavePlayerClass();

	UFUNCTION(BlueprintCallable)
	void LoadPlayerClass();
	
	UFUNCTION()
	void SetPlayerClass(TSubclassOf<AMainCharacter> PlayerClass, bool bFirstLoad);

	UPROPERTY(EditAnywhere)
	TSubclassOf<AMainCharacter> PlayerCharacterClass;

	bool bIsFirstLoad;
	
private:

	FString SlotName = FString("Slot1");

	class AMainCharacter* PlayerRef;

	AGameModeBase* ARPGGameMode;

	
};
