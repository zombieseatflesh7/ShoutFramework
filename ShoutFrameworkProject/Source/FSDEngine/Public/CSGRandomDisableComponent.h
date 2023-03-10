#pragma once
#include "CoreMinimal.h"
#include "CSGRandomDisableProperties.h"
#include "CSGBaseComponent.h"
#include "CSGRandomDisableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGRandomDisableComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGRandomDisableProperties Properties;
    
    UCSGRandomDisableComponent();
};

