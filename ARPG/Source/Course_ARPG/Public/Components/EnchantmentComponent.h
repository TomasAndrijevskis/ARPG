

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/EEffects.h"
#include "Data/Enchantment/EnchantmentFXType.h"
#include "EnchantmentComponent.generated.h"


class UEnchantmentDataAsset;
class UDamageTypeBase;
class UFXSystemAsset;
class UFXSystemComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UEnchantmentComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	virtual void HandleEffectChange(EEffects NewEffect);
	
	EEffects GetCurrentEnchantmentEffect() const {return CurrentEnchantmentEffect;}

	bool IsWeaponEnchanted() const {return CurrentEnchantmentEffect != EEffects::Empty;}
	
	TSubclassOf<UDamageTypeBase> GetEnchantmentDamageType() const {return CurrentEnchantmentDamageType;}

	float GetEnchantedDamage(float DefaultDamage);

	
	UFUNCTION()
	void DeactivateEffect();
	
protected:

	virtual void BeginPlay() override;
	
private:
	
	void ChangeParticle(const TObjectPtr<UFXSystemAsset>& NewEnchantment);

	void CreateDefaultParticles(EEnchantmentFXType Type);
	
	UPROPERTY()
	TArray<TObjectPtr<UFXSystemComponent>> ActiveEnchantmentEffects;

	UPROPERTY(VisibleAnywhere)
	TArray<FName> SocketNames;
	
	UPROPERTY(VisibleAnywhere)
	EEffects CurrentEnchantmentEffect = EEffects::Empty;

	UPROPERTY(VisibleAnywhere)
	FVector EffectScale;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UEnchantmentDataAsset> EnchantmentData;
	
	UPROPERTY(VisibleAnywhere)
	TSubclassOf<UDamageTypeBase> CurrentEnchantmentDamageType;
};