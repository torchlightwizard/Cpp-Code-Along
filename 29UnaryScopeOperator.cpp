#include<iostream>

int a = 10;

//when the scope operator is used without specifying anything before it
//it assumes global

int main(void){
    int a = 20;

    std::cout << a << std::endl;   //used local
    std::cout << ::a << std::endl;   //used global

    return 0;
}