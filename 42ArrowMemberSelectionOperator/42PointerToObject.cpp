#include "classy.h"
#include<iostream>

// So object's pointer to member variables is a bit more complicated
// As no constructor is called to initialize them

int main(void){
    classy obj;
    obj.x = 10;
    std::cout << obj.x << "\n";

    classy *objPointer1;
    std::cout << objPointer1->x << "\n";

    classy *objPointer2;
    objPointer2 = &obj;
    std::cout << objPointer2->x << "\n";
    return 0;
}