#pragma once
#include "CoreMinimal.h"
#include "SDFRandomDisableProperties.h"
#include "SDFBaseComponent.h"
#include "SDFRandomDisableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USDFRandomDisableComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFRandomDisableProperties Properties;
    
    USDFRandomDisableComponent();
};

