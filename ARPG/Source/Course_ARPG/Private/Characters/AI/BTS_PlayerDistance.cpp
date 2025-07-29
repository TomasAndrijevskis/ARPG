
#include "Characters/AI/BTS_PlayerDistance.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"


void UBTS_PlayerDistance::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	FVector CurrentLocation = OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation();

	APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	FVector PlayerLocation;
	if (PlayerPawn)
	{
		PlayerLocation = PlayerPawn->GetActorLocation();
	}
	
	float Distance = static_cast<float>(FVector::Distance(CurrentLocation, PlayerLocation));

	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(TEXT("Distance"), Distance);
}
