#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EElectricalSMGUpgrades.h"
#include "UpgradeValues.h"
#include "StandardItemUpgrade.h"
#include "ElectricalSMGUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UElectricalSMGUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EElectricalSMGUpgrades upgradeType;
    
public:
    UElectricalSMGUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EElectricalSMGUpgrades NewUpgradeType);
    
};

