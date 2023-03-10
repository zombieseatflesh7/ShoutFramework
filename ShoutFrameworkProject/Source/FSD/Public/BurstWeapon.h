#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "BurstWeapon.generated.h"

class UPrimitiveComponent;
class UDamageComponent;
class UHealthComponentBase;
class UFSDPhysicalMaterial;

UCLASS(Blueprintable)
class ABurstWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* BurstFireBonusDamage;
    
public:
    ABurstWeapon();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyToFire();
    
};

