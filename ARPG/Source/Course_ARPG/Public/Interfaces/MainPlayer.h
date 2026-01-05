
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MainPlayer.generated.h"


UINTERFACE(MinimalAPI)
class UMainPlayer : public UInterface
{
	GENERATED_BODY()
};

class COURSE_ARPG_API IMainPlayer
{
	GENERATED_BODY()


public:

	virtual bool HasEnoughStamina(const float Stamina) const {return true;};

	virtual bool HasEnoughMana(const float Mana) const {return true;} ;

	virtual void EndLockonWithActor(AActor* ActorRef) = 0;
};
