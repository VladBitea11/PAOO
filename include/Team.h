#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <iostream>

class Team {
    public:
    //Constructor implicit
    Team();

    //Constructor cu parametru
    Team(const std::string& teamName);

    //Copy constructor
    Team(const Team& other);

    //Move constructor - marcat ca delete pentru a preveni mutarea
    Team(Team&& other) noexcept = delete;

    //Operator de assignment
    Team& operator=(const Team& other);

    //Move assignment operator
    Team& operator=(Team&& other) noexcept;

    //Desctructor
    virtual ~Team();

    protected:
    std::string name;
};

#endif