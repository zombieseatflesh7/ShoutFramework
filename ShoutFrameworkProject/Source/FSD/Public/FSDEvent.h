#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHolidayType.h"
#include "FSDEventActivateChangedDelegate.h"
#include "ClaimableRewardView.h"
#include "EncounterSpecialItem.h"
#include "Engine/DataAsset.h"
#include "FSDEvent.generated.h"

class UObject;
class UCampaign;
class ADebrisDataActor;
class UDrinkableDataAsset;
class UFSDEvent;
class APlayerController;
class UTexture2D;
class UWorld;
class USoundCue;

UCLASS(Blueprintable)
class FSD_API UFSDEvent : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDEventActivateChanged OnActiveChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHolidayType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasClaimableRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreeBeerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreeBeerConfettiVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* SpecialEventBeer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SeasonEndScreenImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> EventAmbienceMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDifferentBarLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SpaceRigBarLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEncounterSpecialItem> EventEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ADebrisDataActor>> EventDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventDebrisInDeepDives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SpacerigSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> UnloadSpacerigSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClaimableRewardView ClaimableRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UCampaign>> Campaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TitleScreenOverride;
    
public:
    UFSDEvent();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void MarkClaimableRewardsSeen(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsFsdEventActive(UObject* WorldContext, const UFSDEvent* FSDEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool HasUnseenClaimableRewards(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool GiveRewards(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTitleScreenOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool GetIsActive(UObject* WorldContext) const;
    
};

