#include<iostream>
#include "birthday.h"
#include "people.h"

people::people(std::string x, birthday y) : name(x), birthdate(y) {}
void people::print(){ std::cout << name << "  "; birthdate.print(); }