#pragma once
#include "CoreMinimal.h"
#include "SDFRandomizeTransformProperties.h"
#include "SDFBaseComponent.h"
#include "SDFRandomizeTransformComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USDFRandomizeTransformComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFRandomizeTransformProperties Properties;
    
    USDFRandomizeTransformComponent();
};

