#ifndef GAMEMANAGEMENT_H
#define GAMEMANAGEMENT_H
#include "charakters.h"

class Game{
    private:
        std::string gamerName;
        int gameNumber;
        Charakter gamer;
        int lastSavingPoint = 0;
        LevelState completedLevels;

    public:
        void saveGame();
        int play();
        void endGame();
        Charakter editCharakter();
        int getSavingPoint();
};

void showGames();
Game getGame(int gameNumber);

class LevelState{
    public:
        bool level1;
};

#endif