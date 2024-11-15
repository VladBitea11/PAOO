#ifndef FOOTBALLPLAYER_H
#define FOOTBALLPLAYER_H

#include "Team.h"

class FootballPlayer : public Team {
    private:
        std::string playerName;
        int goals;

    public:

        //Constructor implicit
        FootballPlayer();

        //Constructor cu parametru
        FootballPlayer(const std::string& teamName, const std::string& playerName, int goalsScored);

        //Copy constructor
        FootballPlayer(const FootballPlayer& other);

        //Move constructor
        FootballPlayer(FootballPlayer&& other) noexcept;

        //Destructor
        ~FootballPlayer() override;

       
};
#endif