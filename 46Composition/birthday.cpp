#include<iostream>
#include "birthday.h"

birthday::birthday(int x, int y, int z): day(x), month(y), year(z) {}
void birthday::print(){ std::cout << day << "  " << month << "  " << year << "\n"; }