#ifndef GAMEMANAGEMENT_H
#define GAMEMANAGEMENT_H

class Game{
    private:
        std::string gamerName;
        int gameNumber;
        Charakter gamer;
    public:
        void saveGame();
};

void showGames();

Game getGame(int gameNumber);


#endif