
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
	void SetSlotName(const FString& NewSlotName);

	UFUNCTION()
	FString GetSlotName() const;
	
	UFUNCTION()
	void SaveStats();

	UFUNCTION()
	void LoadStats();

	UFUNCTION()
	void SaveAbilities();

	UFUNCTION()
	void LoadAbilities();
	
	UFUNCTION()
	void SaveAll();

	UFUNCTION()
	void SaveLevel();
	
	UFUNCTION()
	void SaveAllExceptPosition();

	UFUNCTION()
	void SaveBonfires();

	UFUNCTION()
	void LoadBonfires();
	
	UFUNCTION()
	void InitializeGameInstance();

	UFUNCTION()
	bool CheckSlot(const FString& SlotNameToCheck) const;

	UFUNCTION()
	void LoadPlayerClass();
	
	UFUNCTION()
	void SetPlayerClass(const TSubclassOf<AMainCharacter_Base>& PlayerClass, const bool bFirstLoad);

	UFUNCTION()
	void SaveDefeatedBosses();

	UFUNCTION()
	void LoadDefeatedBosses();

	UFUNCTION()
	void SavePlayerLocation();
	
	void SavePlayerLocation(const FVector& NewLocation);

	UFUNCTION()
	void LoadPlayerLocation();

	UFUNCTION()
	FString GetCurrentMap() const;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AMainCharacter_Base> PlayerCharacterClass;

	void SetTeleportByDoor(const bool bNewTeleportByDoor);

	bool GetTeleportByDoor() const;

	void SaveUsedAttributePoints();

	void LoadUsedAttributePoints();

	void SaveUsedAbilityPoints();

	void LoadUsedAbilityPoints();

	void HandleGameLoad();
	
	bool bIsFirstLoad;
	
private:

	void HandleSaveGame();

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
