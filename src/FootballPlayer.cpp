#include "FootballPlayer.h"
#include <iostream>

FootballPlayer::FootballPlayer(const std::string& playerName, const std::string& playerTeam) : name(playerName), team(playerTeam) {
    std::cout<< "Contructor apelat, jucator initializat: "<< name << " joaca la "<< team << "." <<std::endl;
}

FootballPlayer& FootballPlayer::operator=(const FootballPlayer& other) {
    if(this == &other){
        return *this;
    }

    name = this->name;
    team = other.team;
    std::cout<<"Operatorul = apelat, jucator actualizat: "<<name<< " s-a transferat la "<< team <<"."<<std::endl;
    return *this;
}

FootballPlayer::~FootballPlayer(){
    std::cout<< "Destructor apelat pentru jucatorul: " << name << std::endl;
}

std::string FootballPlayer::getName() const{
    return name;
}

std::string FootballPlayer::getTeam() const {
    return team;
}