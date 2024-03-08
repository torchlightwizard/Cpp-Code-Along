#include<iostream>
#include<cstdlib>

#include <ctime>

//no computer can give truely random numbers
//these numbers are output of some algorithm or pattern

int main(void){
    //1. NOT RANDOM NUMBERS:-
    for(int i = 0 ; i < 10; i++){
        std::cout << rand() << std::endl;   // range:- RAND_MIN to RAND_MAX
    }
    std::cout << "-----------\n";
    
    for(int i = 0 ; i < 10; i++){
        std::cout << rand()%6 << std::endl;   // range:- 0 to 5
    }
    std::cout << "-----------\n";

    for(int i = 0 ; i < 10; i++){
        std::cout << 1+(rand()%6) << std::endl;   // range:- 1 to 6
    }
    std::cout << "-----------\n";

    //2. SEMI RANDOM NUMBERS
    srand(1);   //this is a seed, put a number in it and the rand() will output pattern according to that number
    for(int i = 0 ; i < 10; i++){
        std::cout << 1+(rand()%6);
    }
    std::cout << "   Seed: 1\n";

    srand(1);
    for(int i = 0 ; i < 10; i++){
        std::cout << 1+(rand()%6);   // same as above as seed is same
    }
    std::cout << "   Seed: 1\n";

    srand(2);
    for(int i = 0 ; i < 10; i++){
        std::cout << 1+(rand()%6);   // different from above as seed is different
    }
    std::cout << "   Seed: 2\n";

    //3. TIME AS SEED
    std::cout << "-----------\n";
    srand(time(0));
    for(int i = 0 ; i < 10; i++){
        std::cout << 1+(rand()%6);
    }
    std::cout << "   Seed: time(0)\n";

    for(int i = 0 ; i < 10; i++){
        std::cout << 1+(rand()%6);   // same as above as seed is same
    }
    std::cout << "   Seed: time(0)\n";

    for(int i = 0 ; i < 10; i++){
        std::cout << 1+(rand()%6);   // different from above as seed is different
    }
    std::cout << "   Seed: time(0)\n";

    return 0;
}