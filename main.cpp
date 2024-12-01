#include "Player.h"
#include "TeamManager.h"
#include <memory>
#include <thread>

void sharedTeamDemo(std::shared_ptr<Player> sharedPlayer);

int main()
{
    TeamManager manager1("Mo Salah", 95);
    manager1.usePlayer();
    manager1.incrementPlayerSkill();
    manager1.usePlayer();
    
    std::cout<<std::endl<<"********"<<std::endl;

   // TeamManager manager2 =std::move(manager1);
   // manager2.usePlayer();

    auto sharedPlayer = std::make_shared<Player>("Darwin Nunez", 85);

    std::cout<<std::endl<<"********"<<std::endl;

    std::thread t1(sharedTeamDemo, sharedPlayer);
    std::thread t2(sharedTeamDemo, sharedPlayer);

    std::cout<<std::endl<<"********"<<std::endl;

    t1.join();
    t2.join();

    std::cout<<std::endl<<"********"<<std::endl;

    return 0;
}

void sharedTeamDemo(std::shared_ptr<Player> sharedPlayer)
{
    static std::mutex sharedMutex;
    std::lock_guard<std::mutex> lock(sharedMutex);
    sharedPlayer->incrementSkillLevel();
    sharedPlayer->showInfo();
}