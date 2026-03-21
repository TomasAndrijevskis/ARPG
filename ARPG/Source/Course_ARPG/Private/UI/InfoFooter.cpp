
#include "UI/InfoFooter.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Kismet/GameplayStatics.h"
#include "UI/Buttons/MenuButtonBase.h"


void UInfoFooter::NativeConstruct()
{
	Super::NativeConstruct();
	const AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	Button_Close->OnButtonClickedDelegate.AddUniqueDynamic(PlayerRef, &AMainCharacter_Base::CreateBonfireMenu);
}
