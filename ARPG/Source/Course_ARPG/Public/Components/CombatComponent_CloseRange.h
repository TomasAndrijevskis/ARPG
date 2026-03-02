
#pragma once

#include "CoreMinimal.h"
#include "Components/CombatComponent_Base.h"
#include "CombatComponent_CloseRange.generated.h"


UCLASS()
class COURSE_ARPG_API UCombatComponent_CloseRange : public UCombatComponent_Base
{
	GENERATED_BODY()
	
public:

	virtual void ComboAttack() override;
};
