#include<iostream>

// the recursive function needs a base case

int factorial(int x){
    if(x == 1)
        return 1;
    else
        return x*factorial(x-1);
}

int main(void){
    std::cout << factorial(5) << std::endl;
    return 0;
}