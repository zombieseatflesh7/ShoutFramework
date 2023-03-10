#pragma once
#include "CoreMinimal.h"
#include "ClaimableRewardEntry.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PromotionRewardsLibrary.generated.h"

class UObject;
class APlayerController;

UCLASS(Blueprintable)
class UPromotionRewardsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPromotionRewardsLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool ClaimPromotionRewards(UObject* WorldContext, APlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstPromotion);
    
};

