
#include "Objects/DeathTrigger.h"

#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "Components/BoxComponent.h"


ADeathTrigger::ADeathTrigger()
{
	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Death Collision"));
	Collision->SetupAttachment(GetRootComponent());
}


void ADeathTrigger::BeginPlay()
{
	Super::BeginPlay();
	Collision->OnComponentBeginOverlap.AddDynamic(this, &ADeathTrigger::OnBeginOverlap);
}


void ADeathTrigger::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(OtherActor);
	if (!PlayerRef)
	{
		return;
	}
	PlayerRef->StatsComp->ReduceHealth(PlayerRef->StatsComp->GetStatValue(EStats::MaxHealth), nullptr);
	
}
