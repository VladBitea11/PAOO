#ifndef TEAMMANAGER_H
#define TEAMMANAGER_H

#include "Player.h"
#include <memory>
#include <mutex>

class TeamManager
{
public:
    TeamManager(const std::string &playerName, int skillLevel);
    TeamManager(const TeamManager &) = delete;
    TeamManager &operator=(const TeamManager &) = delete;

    TeamManager(TeamManager &&) noexcept = default;
    TeamManager &operator=(TeamManager &&) noexcept = default;

    void usePlayer() const;
    void incrementPlayerSkill() const;

private:
    std::unique_ptr<Player> player;
    mutable std::mutex playerMutex;
};

#endif // TEAMMANAGER_H
