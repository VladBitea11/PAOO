#include "FootballPlayer.h"
#include <iostream>

//Constructor implicit
FootballPlayer::FootballPlayer() : Team(), playerName("Necunoscut"), goals(0) {
    std::cout<<"Constructor default al jucatorului apelat."<<std::endl;
}

//Constructor cu parametru
FootballPlayer::FootballPlayer(const std::string& teamName, const std::string& playerName, int goalsScored) : Team(teamName), playerName(playerName), goals(goalsScored) {
    std::cout<< "Contructor parametrizat apelat, jucator initializat: "<< playerName << " joaca la "<< name << " si a marcat "<< goals << " goluri."<<std::endl;
}

//Copy constructor
FootballPlayer::FootballPlayer(const FootballPlayer& other) : Team(other), playerName(other.playerName), goals(other.goals) {
    std::cout<<"Copy constructorul jucatorului: "<<playerName<<" a fost apelat."<<std::endl;
}

//Move constructor
/*FootballPlayer::FootballPlayer(FootballPlayer&& other) noexcept : Team(std::move(other)), playerName(std::move(other.playerName)), goals(other.goals) {
    std::cout<<"Move constructorul jucatorului: "<<playerName<<" a fost apelat."<<std::endl;
}
*/


FootballPlayer::~FootballPlayer(){
    std::cout<< "Distrugatorul de jucator apelat pentru jucatorul: " << playerName << std::endl;
}

