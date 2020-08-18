#ifndef GAMEMANAGEMENT_H
#define GAMEMANAGEMENT_H
#include "charakters.h"

class LevelState{
    public:
        bool level1;
};

class Game{
    private:
        std::string gamerName;
        int gameNumber;
        Charakter gamer;
        int lastSavingPoint = 0;
        FinishedLevels completedLevels;

    public:
        void saveGame();
        int play();
        void endGame();
        Charakter editCharakter();
        int getSavingPoint();
};

class FinishedLevels{
    public:
        bool kacke;
};

void showGames();
Game getGame(int gameNumber);



#endif