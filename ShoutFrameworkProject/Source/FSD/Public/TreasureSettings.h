#pragma once
#include "CoreMinimal.h"
#include "ETreasureType.h"
#include "Curves/CurveFloat.h"
#include "Engine/DataAsset.h"
#include "TreasureSettings.generated.h"

class UDrinkableDataAsset;
class UItemSkinSet;
class UItemAquisitionSource;
class USpecialEvent;
class UVictoryPose;

UCLASS(Blueprintable)
class UTreasureSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETreasureType> CrateTreasureTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CrateTreasureEmptyMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETreasureType> LostPackTreasureTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LostPackEmptyMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemAquisitionSource* CrateAquisitionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemAquisitionSource* LostPackAquisitionSource;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve TreasureChanceMissionLengthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USpecialEvent*> TreasureEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVictoryPose*> VictoryPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemSkinSet*> SkinSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDrinkableDataAsset*> Drinks;
    
public:
    UTreasureSettings();
};

