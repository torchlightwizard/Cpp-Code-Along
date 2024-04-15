#include<iostream>

// sizeof() function returns memory occupied by argument in bytes

//data types int, char etc take diff amount of memory on diff computers

int main(void){
    int a;
    double b;
    char c;
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(b) << std::endl;
    std::cout << sizeof(c) << std::endl;

    //size of array
    short ar[2] = {0, 0};
    std::cout << sizeof(ar)/sizeof(short) << std::endl;

    return 0;
}