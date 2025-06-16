#pragma once

#include "CoreMinimal.h"
#include "FTraceSockets.generated.h"

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FTraceSockets
{
	GENERATED_BODY();
	
	UPROPERTY(EditAnywhere)
	FName StartSocket;

	UPROPERTY(EditAnywhere)
	FName EndSocket;

	UPROPERTY(EditAnywhere)
	FName SocketRotation;

	/*
	player
	sword_bottom
	FX_Sword_Top
	sword_bottom
	*/

	/*
	Boss
	weapon_l
	FX_Trail_L_01
	FX_Trail_L_02

	weapon_r
	FX_Trail_R_01
	FX_Trail_R_02
	*/
};
