#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPickaxePartLocation.h"
#include "PickaxeMeshInstance.h"
#include "GameFramework/Actor.h"
#include "SpawnReleasedActor.h"
#include "PickaxePartEquip.h"
#include "ItemIDInterface.h"
#include "PickaxePreviewActor.generated.h"

class USceneComponent;
class UItemID;
class UPickaxePart;
class UMaterialInterface;

UCLASS(Blueprintable)
class APickaxePreviewActor : public AActor, public IPickaxePartEquip, public IItemIDInterface, public ISpawnReleasedActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TP_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EquippedMaterial;
    
public:
    APickaxePreviewActor();
    UFUNCTION(BlueprintCallable)
    void PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart);
    
    UFUNCTION(BlueprintCallable)
    void EquipParts();
    
    
    // Fix for true pure virtual functions not being implemented
};

