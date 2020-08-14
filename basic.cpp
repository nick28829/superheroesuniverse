#include <iostream>
#include "basic.h"
#include "levels.h"
#include "charakters.h"
#include "gameManagement.h"
#include "inout.h"

int utils::newGame(){
    Game currentGame {};
    return currentGame.play();
}
int utils::loadGame(){
    basicOut("Choose your Game to proceed: ");
    showGames();
    Game currentGame = getGame(intInput());
    return currentGame.play();
}


namespace{


}
