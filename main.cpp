#include <iostream>
#include "FootballPlayer.h"

int main(){
    // Instantiez o clasa derivata folosind tipul clasei de baza
    Team* team1 = new FootballPlayer(); //Se apeleaza constructorul implicit pentru Team si pentru FootballPlayer
    delete team1; //Se apeleaza destructorul pentru FootballPlayer si appi pentru Team

    std::cout<<"---"<<std::endl;

    //Instantiez clasa derivata folosind constructorul cu parametri
    FootballPlayer player2("FC Barcelona", "Lionel Messi", 700);

    std::cout<<"---"<<std::endl;

    FootballPlayer player3; //Constructor implicit
    FootballPlayer player4("Real Madrid", "Cristiano Ronaldo", 699);

    /*FootballPlayer player6("Liverpool", "Mo Salah", 500);
    player6 = std::move(player4);
    */

    std::cout<<"---"<<std::endl;

    FootballPlayer player7(player2);//Copy constructor
    
    return 0;
}