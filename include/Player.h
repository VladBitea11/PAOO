#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <mutex>

class Player
{
public:
    Player(const std::string &name, int skillLevel);
    ~Player();
    void showInfo() const;
    void incrementSkillLevel();

private:
    std::string name;
    int skillLevel;
    mutable std::mutex skillMutex;
};

#endif // PLAYER_H
