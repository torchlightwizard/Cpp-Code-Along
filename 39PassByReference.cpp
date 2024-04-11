#include<iostream>

// pass by value: passing a copy of the variable's value
// pass by ref: passing the variable's address 

void passByValue(int x);
void passByRef(int *x);

int main(void){
    int a = 10;
    int b = 10;
    std::cout << "a:               " << a << std::endl;
    std::cout << "b:               " << b << std::endl;

    passByValue(a);
    passByRef(&b);

    std::cout << "pass by value a: " << a << std::endl;
    std::cout << "pass by ref b:   " << b << std::endl;

    return 0;
}

void passByValue(int x){
    x = 20;
}

void passByRef(int *x){
    *x = 20;
}