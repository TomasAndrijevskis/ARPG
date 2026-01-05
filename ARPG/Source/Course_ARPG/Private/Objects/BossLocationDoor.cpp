
#include "Course_ARPG/Public/Objects/BossLocationDoor.h"
#include "Characters/Enemy/Boss.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"


ABossLocationDoor::ABossLocationDoor()
{
	BlockCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockCollision"));
	BlockCollision->SetupAttachment(GetRootComponent());
	TriggerCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerCollision"));
	TriggerCollision->SetupAttachment(BlockCollision);
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(BlockCollision);
}


void ABossLocationDoor::BeginPlay()
{
	Super::BeginPlay();
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Mesh->SetVisibility(false);
	if (MeshMaterial) Mesh->SetMaterial(0, MeshMaterial);
	SetCollisionSettings(*BlockCollision,ECR_Ignore, ECR_Ignore, ECR_Overlap);
	SetCollisionSettings(*TriggerCollision,ECR_Ignore, ECR_Ignore, ECR_Overlap);

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ABossLocationDoor::HandleDoor, .5, false);
}


void ABossLocationDoor::HandleDoor()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABoss::StaticClass(), FoundActors);
	if (FoundActors.Num() > 0)
	{
		TriggerCollision->OnComponentBeginOverlap.AddDynamic(this, &ABossLocationDoor::OnBeginOverlap);
		OnBossDiedDelegate.AddDynamic(this, &ABossLocationDoor::ReopenDoor);
	}
}


void ABossLocationDoor::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	CloseDoor();
}


void ABossLocationDoor::SetCollisionSettings(UBoxComponent& Collision, const ECollisionResponse OtherResponse, const ECollisionResponse CamVisResponse, const ECollisionResponse PlayerResponse)
{
	Collision.SetCollisionResponseToAllChannels(OtherResponse);
	Collision.SetCollisionResponseToChannel(ECC_Camera, CamVisResponse);
	Collision.SetCollisionResponseToChannel(ECC_Visibility, CamVisResponse);
	Collision.SetCollisionResponseToChannel(CollisionChannel, PlayerResponse);
}


void ABossLocationDoor::ReopenDoor()
{
	Mesh->SetVisibility(false);
	BlockCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	TriggerCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SetCollisionSettings(*BlockCollision,ECR_Block, ECR_Ignore, ECR_Overlap);
	SetCollisionSettings(*TriggerCollision,ECR_Block, ECR_Ignore, ECR_Overlap);
}


void ABossLocationDoor::CloseDoor()
{
	Mesh->SetVisibility(true);
	BlockCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SetCollisionSettings(*BlockCollision,ECR_Block, ECR_Block, ECR_Block);
}
