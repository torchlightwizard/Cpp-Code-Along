#include<iostream>
#include<cstdlib>
#include<ctime>

int main(void){
    srand(time(0));
    
    int ar[10];

    for(int i = 0; i < 10; i++){
        ar[i] = 1 + (rand()%30);   // range 1 - 30
    }

    for(int i = 0; i < 10; i++){
        std::cout << ar[i] << std::endl;
    }

    return 0;
}