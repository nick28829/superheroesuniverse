#include "gameManagement.h"
#include <stdlib.h>
#include <string>
#include "levels.h"

// constructors
Game::Game(){
    this->completedLevels;
    this->gamer = this->editCharakter();
}

FinishedLevels::FinishedLevels(){
    this->level1 = false;
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

// in this method the game is running
int Game::play(){
    int currentLevel = this->getSavingPoint();
    while (true){
        currentLevel = startLevel(currentLevel, this->*completedLevels); // -1 is the flag for ending the game
        if (currentLevel == -1){ 
            break;
        }
    }
    this->endGame();
    
}

