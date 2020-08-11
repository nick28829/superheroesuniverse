#include <iostream>
#include "levels.h"
#include "utils.h"

int main(){
while (True){
	std::cout << "Möchtest Du einen Spielstand laden oder einen neuen Spielstand erstellen? (l/n)"
	<< std::endl;
	char userInput;
	std::cin >> userInput >> endl;
	switch (userInput):
	case 'l':	
		utils::loadGame();
		break;
	case 'n':
		utils::newGame();
		break;
	default case:
		continue;
}
return 0
}
