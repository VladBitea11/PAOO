#include "Player.h"

Player::Player(const std::string &name, int skillLevel) : name(name), skillLevel(skillLevel) {
    std::cout << "Player " << name << " acquired with skill level: " << skillLevel << std::endl;
}

Player::~Player() {
    std::cout << "Player " << name << " released." << std::endl;
}

void Player::showInfo() const {
    std::cout << "Player: " << name << ", Skill Level: " << skillLevel << std::endl;
}

void Player::incrementSkillLevel(){
    std::lock_guard<std::mutex> lock(skillMutex);
    ++skillLevel;
    std::cout<<"Jucatorul "<<name<<" a atins nivelul: "<<skillLevel<<std::endl;
}
