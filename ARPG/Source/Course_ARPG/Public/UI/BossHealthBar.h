
#pragma once

#include "CoreMinimal.h"
#include "EnemyHealthBar.h"
#include "BossHealthBar.generated.h"


class UAbilityComponent_Base;
class UHorizontalBox;
class UStatusIconWithTimer;
class UTextBlock;
class UProgressBar;

UCLASS()
class COURSE_ARPG_API UBossHealthBar : public UEnemyHealthBar
{
	GENERATED_BODY()

public:
	
	void SetBossName(const FText& NewBossName);

private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_BossName;
};
