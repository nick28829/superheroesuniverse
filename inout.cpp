#include <iostream>
#include <string>
#include "inout.h"
#include "charakters.h"
#include "gameManagement.h"

void charOutput(Charakter *person, std::string message){
    std::cout << person->getName() <<": "<< message << std::endl;
}

char answer(){
    char in;
    std::cin >> in;
    if (in == 'q') {
        extern Game currentGame;
        currentGame.endGame();
    } else if (in=='s') {
        extern Game currentGame;
        currentGame.saveGame();
        basicOut("Game saved successfully.");
        return answer();
    }
    return in;
}

std::string input(){
    std::string in;
    std::cin >> in;
    return in;
}

void basicOut(std::string message){
    std::cout << message << std::endl;
}

int intInput(){
    int i;
    std::cin >> i;
    return i;
}

void error(std::string message){
    std::cerr << message << std::endl; 
}
