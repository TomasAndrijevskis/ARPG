
#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ARPG_GameInstance.generated.h"


class UARPG_SaveGame;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UARPG_GameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	virtual void Init() override;

	UFUNCTION()
	void InitializeGameInstance();
	
	UFUNCTION()
	void SetSlotName(const FString& NewSlotName);

	UFUNCTION()
	FString GetSlotName() const {return SlotName;} 
	
	UFUNCTION()
	void SaveAll();
	
	UFUNCTION()
	void SaveAllExceptPosition();

	UFUNCTION()
	void SaveBonfires();
	
	UFUNCTION()
	bool CheckSlot(const FString& SlotNameToCheck) const;
	
	UFUNCTION()
	void SetPlayerClass(const TSubclassOf<AMainCharacter_Base>& PlayerClass, const bool bFirstLoad);

	UFUNCTION()
	void SavePlayerLocation();
	
	void SavePlayerLocation(const FVector& NewLocation);

	UFUNCTION()
	void LoadPlayerLocation();

	UFUNCTION()
	FString GetCurrentMap() const;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AMainCharacter_Base> PlayerCharacterClass;

	void SetTeleportByDoor(const bool bNewTeleportByDoor) {bTeleportByDoor = bNewTeleportByDoor;};

	bool GetTeleportByDoor() const {return bTeleportByDoor;}

	void HandleGameLoad();

	void LoadCurrentEffect();
	
	bool bIsFirstLoad;
	
private:

	void HandleSaveGame();
	
	void LoadPlayerClass();
	
	void SaveAttributeData();
	
	void LoadAttributeData();
	
	void SaveLevelData();
	
	void LoadLevelData();
	
	void SaveAbilities();

	void LoadAbilities();
	
	void LoadBonfires();
	
	void SaveDefeatedBosses();
	
	void LoadDefeatedBosses();

	void SaveUsedAttributePoints();

	void LoadUsedAttributePoints();

	void SaveUsedAbilityPoints();

	void LoadUsedAbilityPoints();

	void SaveCurrentEffect();
	
	UPROPERTY()
	UARPG_SaveGame* SaveGameInstance;
	
	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

	UPROPERTY()
	AGameModeBase* ARPGGameMode;
	
	FString SlotName = FString("Slot1");
	
	//game will not load previous saved position on next map
	bool bTeleportByDoor = false;
};
