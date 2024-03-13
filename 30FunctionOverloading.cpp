#include<iostream>

void printFunc(int x){
    std::cout << "Int: " << x << std::endl;
}

void printFunc(float x){
    std::cout << "Float: " << x << std::endl;
}

int main(void){
    int a = 10;
    float b = 20.999;

    printFunc(a);
    printFunc(b);

    return 0;
}