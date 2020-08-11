#include <iostream>
#include <string>
#include "inout.h"
#include "charakters.h"

void charOutput(Charakter *person, std::string message){
    std::cout << person->getName() <<": "<< message << std::endl;
}

char answer(){
    char in;
    std::cin >> in;
    return in;
}

std::string input(){
    std::string in;
    std::cin >> in;
    return in;
}

void basicOut(std::string message){
    std::cout << message << std::endl;
}

int intInput(){
    int i;
    std::cin >> i;
    return i;
}
