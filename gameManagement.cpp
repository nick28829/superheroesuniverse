#include "gameManagement.h"
#include <stdlib.h>
#include <string>
#include "levels.h"

// constructors
Game::Game(){
    LevelState completedLevels {};
    this->gamer = this->editCharakter();
}

LevelState::LevelState(){
    bool level1 = 0;
}

// functions outside the classes
Game getGame(int gameNumber){
    
}

void showGames(){}

// methods of Game
void Game::saveGame(){
    extern int currentLevel;
    this->lastSavingPoint = currentLevel;
    // add saving in document
}

int Game::getSavingPoint() {
    return this->lastSavingPoint;
}

void Game::endGame(){
   this->saveGame();
    exit(0);
}

// this mehtod manages most of the game
int Game::play(){
    int currentLevel = this->getSavingPoint();
    startLevel(&currentLevel, this->*completedLevels);
}

