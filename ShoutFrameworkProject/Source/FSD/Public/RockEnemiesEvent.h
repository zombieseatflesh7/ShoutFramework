#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameEvent.h"
#include "RockEnemiesEvent.generated.h"

class USkeletalMeshComponent;
class UEnemyGroupDescriptor;
class APawn;
class AProjectile;
class UHealthComponentBase;
class UParticleSystem;

UCLASS(Blueprintable)
class ARockEnemiesEvent : public AGameEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> PowerUpClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerUpGenerationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> KillAmountPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaxEnemyCountPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> SpawnedRockEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerUpsPerGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GruntPointsAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TankPointsAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyGroupDescriptor* RockEnemies;
    
public:
    ARockEnemiesEvent();
protected:
    UFUNCTION(BlueprintCallable)
    void StopPowerupGeneration();
    
    UFUNCTION(BlueprintCallable)
    void StartPowerupGeneration();
    
    UFUNCTION(BlueprintCallable)
    void SpawnRockEnemies(float Difficulty, const TArray<FVector>& Locations);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void ShowFireEffects(int32 selectedBone);
    
public:
    UFUNCTION(BlueprintCallable)
    void RockEnemySpawned(APawn* spawnedEnemy);
    
    UFUNCTION(BlueprintCallable)
    void RockEnemyDied(UHealthComponentBase* Health);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnemySpawnedAfterComplete(APawn* spawnedEnemy);
    
};

