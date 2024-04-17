#include "classy.h"
#include<iostream>

// Note that we dont need to use *objPointer as pointer to object is different from pointer to variable
// Because variables hold values which can be dereferenced by *pointer
// But for pointer to object, what value can we get by *objPointer? None! objects dont have a specific storage to dereference
// but contain a multitude of data

// Also note, we dont necessarily need to provide the pointer with an object's address
// Maybe an object is already created when we create object's pointer

int main(void){
    classy obj;
    obj.printStuff();

    classy *objPointer;
    // objPointer = &obj;   //we could use this or not, up to us
    objPointer->printStuff();
    return 0;
}