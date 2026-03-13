
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "Data/EStats.h"
#include "DamageTypes.generated.h"


UCLASS()
class UDamageTypeBase : public UDamageType
{
	GENERATED_BODY()
public:
	EStats GetResistanceStat() const {return ResistanceStat;};
protected:
	EStats ResistanceStat = EStats::None;
};


UCLASS()
class UPhysicalDamageType : public UDamageTypeBase
{
	GENERATED_BODY()
	UPhysicalDamageType(){ResistanceStat = EStats::PhysDmgResistance;}
};


UCLASS()
class UMagicalDamageType : public UDamageTypeBase
{
	GENERATED_BODY()
	UMagicalDamageType(){ResistanceStat = EStats::MagDmgResistance;}
};

UCLASS()
class UFireDamageType : public UDamageTypeBase
{
	GENERATED_BODY()
	UFireDamageType(){ResistanceStat = EStats::FireDmgResistance;}
};

UCLASS()
class UPoisonDamageType : public UDamageTypeBase
{
	GENERATED_BODY()
	UPoisonDamageType(){ResistanceStat = EStats::PoisonDmgResistance;}
};

UCLASS()
class UIceDamageType : public UDamageTypeBase
{
	GENERATED_BODY()
	UIceDamageType(){ResistanceStat = EStats::IceDmgResistance;}
};