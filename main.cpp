#include <iostream>
#include "basic.h"

int main(){
	while (true){
		std::cout << "Do you want to load an existing game or create a new one? (l/n)"
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
