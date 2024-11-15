#include "Team.h"

//Constructor implicit
Team::Team() : name("Necunoscut") {
    std::cout << "Constructorul default al echipei apelat."<<std::endl;
}

//Constructor cu parametru
Team::Team(const std::string& teamName) : name(teamName) {
    std::cout<<"Constructorul parametrizat al echipei: "<< name << " apelat." <<std::endl;
}

//Copy constructor
Team::Team(const Team& other) : name(other.name) {
    std::cout<<"Copy constructorul echipei: "<<name<<" a fost apelat."<<std::endl;
}

Team& Team::operator=(const Team& other) {
    if(this != &other) {
        name = other.name;
        std::cout << "Operatorul assignment al echipei: "<< name << " a fost apelat."<<std::endl;
    }
    return *this;
}

//Move constructor operator
Team& Team::operator=(Team&& other) noexcept {
    if(this != &other) {
        name = std::move(other.name);
        std::cout<< "Operatorul move assignment al echipei: "<< name << " a fost apelat."<<std::endl;
    }
    return *this;
}

//Destructor
Team::~Team(){
    std::cout<<"Distrugatorul de echipe a fost apelat pentru: "<< name << std::endl;
}