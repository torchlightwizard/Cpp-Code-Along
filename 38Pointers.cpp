#include<iostream>

int main(void){
    int var = 10;
    std::cout << "Address of any variable: " << &var << std::endl;

    int * varPointer = &var;
    std::cout << "Pointer's stored variable address: " << varPointer << std::endl;
    std::cout << "The value stored in that variable accessed by the pointer: " << *varPointer << std::endl;

    std::cout << "The pointer also has an address of its own: " << &varPointer << std::endl;

    return 0;
}