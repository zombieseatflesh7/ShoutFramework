#pragma once
#include "CoreMinimal.h"
#include "ECaveEntranceType.h"
#include "ECaveEntrancePriority.h"
#include "Components/PrimitiveComponent.h"
#include "CaveEntranceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCaveEntranceComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECaveEntranceType Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECaveEntrancePriority Priority;
    
public:
    UCaveEntranceComponent();
};

