#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "DualWieldWeapon.generated.h"

class UFXSystemAsset;
class USkeletalMeshComponent;
class UFirstPersonSkeletalMeshComponent;
class UAnimMontage;

UCLASS(Abstract, Blueprintable)
class ADualWieldWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFirstPersonSkeletalMeshComponent* FPMeshLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TPMeshLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Left_Reload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Left_TP_Reload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* CasingParticlesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MuzzleLeft;
    
public:
    ADualWieldWeapon();
};

