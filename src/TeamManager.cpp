#include "TeamManager.h"

TeamManager::TeamManager(const std::string &playerName, int skillLevel)
    : player(std::make_unique<Player>(playerName, skillLevel)) {}

void TeamManager::usePlayer() const
{
    std::lock_guard<std::mutex> lock(playerMutex);
    if (player)
    {
        player->showInfo();
    }
}

void TeamManager::incrementPlayerSkill() const
{
    std::lock_guard<std::mutex> lock(playerMutex);
    if(player)
    {
        player->incrementSkillLevel();
    }
}