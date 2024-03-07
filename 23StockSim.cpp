#include<iostream>
#include<cstdlib>

int main(void){
    float money = 10000;

    for(short i = 0; i < 30; i++){
        money += (money* (float(rand() % 10)/1000));
    }

    std::cout << money << "\n";

    return 0;
}