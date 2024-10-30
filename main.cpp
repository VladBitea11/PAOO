#include <iostream>
#include "FootballPlayer.h"

int main(){
    FootballPlayer player1("Lionel Messi", "FC Barcelona");
    FootballPlayer player2("Cristiano Ronaldo", "Real Madrid");

    std::cout<<"Jucatorul: "<< player2.getName() << " joaca la " << player2.getTeam() << "." << std::endl;

    player2 = player1;

    std::cout<<"Jucatorul: "<< player2.getName() << " joaca la " << player2.getTeam() << "." << std::endl;

    return 0;
}