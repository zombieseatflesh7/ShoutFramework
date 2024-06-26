#include "CampaignManager.h"
#include "Templates/SubclassOf.h"

UCampaignManager::UCampaignManager() {
    this->MainCampaign = NULL;
    this->ActiveCampaign = NULL;
    this->NumFailedRequests = 0;
    this->WeeklyBackendDataValid = false;
    this->WeeklyBackendSeed = -1;
}

void UCampaignManager::StartNewCampaign(TSubclassOf<UCampaign> campaignClass, UFSDSaveGame* SaveGame) {
}

void UCampaignManager::SkipMainCampaign(UObject* WorldContextObject) {
}

void UCampaignManager::OnEventsRefreshed() {
}

bool UCampaignManager::IsWeeklyCampaignCompleted(UObject* WorldContext, ECampaignType campaigntype) const {
    return false;
}

bool UCampaignManager::IsInCampaignMission(AFSDPlayerController* Player) const {
    return false;
}

bool UCampaignManager::IsCampaignRestrictionsMet(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* optionalDifficulty) const {
    return false;
}

bool UCampaignManager::IsCampaignMission(UObject* WorldContextObject, UGeneratedMission* mission) const {
    return false;
}

bool UCampaignManager::IsActiveCampaign(UCampaign* Campaign) const {
    return false;
}

TArray<TSubclassOf<UCampaign>> UCampaignManager::GetUncompletedCampaigns(AFSDPlayerController* Player) const {
    return TArray<TSubclassOf<UCampaign>>();
}

TArray<TSubclassOf<UCampaign>> UCampaignManager::GetCompletedSideCampaigns(AFSDPlayerController* Player) const {
    return TArray<TSubclassOf<UCampaign>>();
}

UGeneratedMission* UCampaignManager::GetCampaingMission(const TArray<UGeneratedMission*>& missions, const FGlobalMissionSeed& GlobalSeed) const {
    return NULL;
}

void UCampaignManager::CompleteCampaignWithNoMissions(TSubclassOf<UCampaign> campaignClass, UFSDSaveGame* SaveGame) {
}

void UCampaignManager::AbortActiveCampaign(UFSDSaveGame* SaveGame) {
}


