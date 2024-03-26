#include<iostream>

int main(void){
    int ar[5][3] = {{1,2,3}, {1,2,3}, {1,2,3}, {4,5,6}, {4,5,6}};

    std::cout << ar[0] << std::endl;
    std::cout << *ar[0] << std::endl;
    std::cout << ar[0][1] << std::endl;
    std::cout << ar[3][1] << std::endl;

    return 0;
}