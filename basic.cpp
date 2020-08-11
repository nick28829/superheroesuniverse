#include <iostream>
#include "basic.h"
#include "levels.h"
#include "charakters.h"
#include "gameManagement.h"
#include "inout.h"

int utils::newGame(){}
int utils::loadGame(){
    basicOut("Choose your Game to proceed: ");
    showGames();
    Game currentGame = getGame(intInput());
}


namespace{


}
