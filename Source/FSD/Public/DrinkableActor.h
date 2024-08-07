#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DrinkableActor.generated.h"

class APlayerCharacter;
class UDrinkableDataAsset;

UCLASS(Abstract, Blueprintable)
class ADrinkableActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BarSlotIndex, meta=(AllowPrivateAccess=true))
    int32 BarSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DrinkableData, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* DrinkableData;
    
public:
    ADrinkableActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Pickup(APlayerCharacter* byCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_DrinkableData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_BarSlotIndex();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Fill();
    
};

