#include<iostream>

void printArray(int ar[], short size);

int main(void){
    int tron[5] = {542,435,45,46,123};
    int neon[10] = {1234,43,76,9,45,25,254,75,877,1234};

    printArray(tron, 5);
    printArray(neon, 10);

    return 0;
}

void printArray(int ar[], short size){
    std::cout << "Print Array:-" << std::endl;
    for(short i = 0; i < size; i++){
        std::cout << ar[i] << "   ";
    }
    std::cout << std::endl;
}