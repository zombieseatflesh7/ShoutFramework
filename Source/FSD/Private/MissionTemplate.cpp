#include "MissionTemplate.h"
#include "Templates/SubclassOf.h"

UMissionTemplate::UMissionTemplate() {
    this->PrimaryObjective = NULL;
    this->MissionIcon = NULL;
    this->MissionIconSmall = NULL;
    this->MissionTypeIndex = 0;
    this->MustBeUnlocked = true;
    this->RoomEncounerScale = 1.00f;
    this->StationaryEnemyScale = 1.00f;
}


bool UMissionTemplate::IsLocked(UFSDSaveGame* SaveGame) const {
    return false;
}

TArray<UMissionDuration*> UMissionTemplate::GetValidDurations() const {
    return TArray<UMissionDuration*>();
}

TArray<UMissionComplexity*> UMissionTemplate::GetValidComplexities() const {
    return TArray<UMissionComplexity*>();
}

TSoftClassPtr<AProceduralSetup> UMissionTemplate::GetSoftReferenceToPLS() {
    return NULL;
}

FObjectiveMissionIcon UMissionTemplate::GetPrimaryObjectiveIconFromAsset(UMissionTemplate* mission, bool getSmallVersion) {
    return FObjectiveMissionIcon{};
}

FObjectiveMissionIcon UMissionTemplate::GetPrimaryObjectiveIcon(bool getSmallVersion) const {
    return FObjectiveMissionIcon{};
}

TSubclassOf<AProceduralSetup> UMissionTemplate::GetPLS() const {
    return NULL;
}

TSubclassOf<UObjective> UMissionTemplate::GetObjectiveClass() {
    return NULL;
}

int32 UMissionTemplate::GetMissionTypeIndex() const {
    return 0;
}

UTexture2D* UMissionTemplate::GetMissionImageLarge() const {
    return NULL;
}

UTexture2D* UMissionTemplate::GetMissionButtonImage() const {
    return NULL;
}

UGeneratedMission* UMissionTemplate::GenerateMission(const UObject* WorldContextObject, UBiome* Biome, int32 Seed, const FGlobalMissionSeed& GlobalSeed, UMissionComplexity* limitComplexity, UMissionDuration* limitDuration, UMissionMutator* Mutator, TArray<UMissionWarning*> Warnings, UMissionChallenge* Challenge, TArray<TSubclassOf<UObjective>> forceSecondary, UGemResourceData* forcedGem) {
    return NULL;
}


