#include<iostream>

int main(void){
    int ar[5];
    int *p0 = &ar[0];
    int *p1 = &ar[1];
    int *p2 = &ar[2];
    int *p3 = &ar[3];
    int *p4 = &ar[4];
    std::cout << "Addresses inside an array:-" << std::endl;
    std::cout << p0 << "  " << p1 << "  " << p2 << "  " << p3 << "  " << p4 << std::endl;


    std::cout << "Pointer Arithmetic:-" << std::endl;
    int *point = &ar[0];
    for(int i = 0; i < 5; i++)
        std::cout << point++ << "  ";   // *we can add stuff and it would point to the next element
    std::cout << std::endl;

    return 0;
}