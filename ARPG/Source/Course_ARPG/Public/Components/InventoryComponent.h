
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


class UInventoryWidget;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void CreateInventory();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void RemoveInventory();
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInventoryWidget> InventoryWidgetClass;

	UPROPERTY()
	UInventoryWidget* InventoryWidgetRef;
	
	UPROPERTY(EditDefaultsOnly)
	int SlotsAmount;
};
