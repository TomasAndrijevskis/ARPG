
#include "Objects/DeathTrigger.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"


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
	UGameplayStatics::ApplyDamage(OtherActor, 99999, nullptr, this, nullptr);
}