
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/PickableItems.h"
#include "InventoryComponent.generated.h"


class APickableItem_Base;
class AARPG_PlayerController;
class UInventoryWidget;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:

	void CreateInventoryWidget();
	
	void RemoveInventoryWidget();

	void AddItemToInventory(int ItemID);

	void RemoveItemFromInventory(int ItemID);
	
protected:
	
	virtual void BeginPlay() override;
	
private:

	const FPickableItems* FindItemByID(int ItemID) const;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInventoryWidget> InventoryWidgetClass;

	UPROPERTY(VisibleAnywhere)
	TArray<TSubclassOf<APickableItem_Base>> Items;
	
	UPROPERTY()
	UInventoryWidget* InventoryWidgetRef;

	UPROPERTY()
	AARPG_PlayerController* PC;

	UPROPERTY(EditDefaultsOnly)
	UDataTable* ItemsDataTable;
	
	UPROPERTY(EditDefaultsOnly)
	int SlotsAmount;
};
