#include "classy.h"
#include<iostream>   //YES  this is needed here as well, because how else its going to include it?

classy::classy(){
    x = 0;
    std::cout << "Classy object created!\n";
}

void classy::printStuff(){
    std::cout << "Printing hee hee.\n";
}