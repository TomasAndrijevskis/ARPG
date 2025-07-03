
#include "UI/PlayerDeath.h"
#include "Kismet/GameplayStatics.h"

void UPlayerDeath::NativeConstruct()
{
	Super::NativeConstruct();
	PlayAnimation(FadeIn, 0.f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
	//UE_LOG(LogTemp, Error, TEXT("PlayerDeathUI|Animation Started"));
}

void UPlayerDeath::OnAnimationFinished_Implementation(const UWidgetAnimation* Animation)
{
	Super::OnAnimationFinished_Implementation(Animation);
	//UE_LOG(LogTemp, Error, TEXT("PlayerDeathUI|OnAnimationFinished"));
	FString LevelName = UGameplayStatics::GetCurrentLevelName(this, true);
	UGameplayStatics::OpenLevel(this, FName(*LevelName));
}
