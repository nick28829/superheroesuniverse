#include <iostream>
#include "basic.h"

int main(){
	while (true){
		std::cout << "Möchtest Du einen Spielstand laden oder einen neuen Spielstand erstellen? (l/n)"
		<< std::endl;
		char userInput;
		std::cin >> userInput;
		switch (userInput){
			case 'l':	
				utils::loadGame();
				break;
			case 'n':
				utils::newGame();
				break;
			default :
				continue;
		}
	}
	return 0;
}
