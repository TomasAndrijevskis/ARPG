
#include "Combat/BlockComponent.h"
#include "GameFramework/Character.h"
#include "Interfaces/MainPlayer.h"


bool UBlockComponent::CanBlock(AActor* Opponent)
{
	ACharacter* CharacterRef = GetOwner<ACharacter>();

	if (!CharacterRef->Implements<UMainPlayer>())
	{
		return false;
	}
	IMainPlayer* PlayerRef = Cast<IMainPlayer>(CharacterRef);
	
	FVector OpponentForward = Opponent->GetActorForwardVector();
	FVector PlayerForward = CharacterRef->GetActorForwardVector();
	double Result = FVector::DotProduct(OpponentForward, PlayerForward);
	
	if (Result < 0 && PlayerRef->HasEnoughStamina(StaminaCost))
	{
		CharacterRef->PlayAnimMontage(BlockAnimMontage);
		OnBlockDelegate.Broadcast(StaminaCost);
		return true;
	}
	return false;
}

