#ifndef GAMEMANAGEMENT_H
#define GAMEMANAGEMENT_H
#include "charakters.h"

class Game{
    private:
        std::string gamerName;
        int gameNumber;
        Charakter gamer;
    public:
        void saveGame();
        int play();
};

void showGames();

Game getGame(int gameNumber);


#endif