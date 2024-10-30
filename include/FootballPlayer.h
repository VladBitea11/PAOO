#ifndef FOOTBALLPLAYER_H
#define FOOTBALLPLAYER_H

#include <string>

class FootballPlayer {
    private:
        std::string name;
        std::string team;

    public:
        //Constructor
        FootballPlayer(const std::string& playerName = "", const std::string& playerTeam = "");

        //Copy operator =
        FootballPlayer& operator=(const FootballPlayer& other);

        //Destructor
        ~FootballPlayer();

        //Gettere
        std::string getName() const;
        std::string getTeam() const;
};
#endif