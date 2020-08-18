#include "levels.h"
#include <fstream>
#include <string>
#include <map>
#include "inout.h"
#include "gameManagement.h"
#include "charakters.h"

int startLevel(int currentLevel, LevelState* completedLevels){
    // create charakters
    std::map< std::string, Charakter> *charakterMap = new std::map< std::string, Charakter>{};
    std::ifstream levelfile( "levels/level" + currentLevel);    
    if (!levelfile){
        error("Could not load level.")
        return -1
    }
    
    
    // some gameplay

    // save progress

    // return next level



}