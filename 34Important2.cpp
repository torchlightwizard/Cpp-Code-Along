#include<iostream>

// Using sizeof inside function also does not give accurate results
// As it does not detect all size of the array in sizeof(array)

// This is because inside the function array is just a pointer
// and a pointer's size is 8, as it holds addresses

void passAsArray(int ar[]);
void passAsPointer(int *ar);

int main(void){
    int ar[5] = {10,20,30,40,50};

    std::cout << std::endl;
    std::cout << "---INSIDE MAIN---" << std::endl;

    std::cout << "sizeof(ar)/sizeof(ar[0]):       " << sizeof(ar)/sizeof(ar[0]) << std::endl;
    std::cout << "sizeof(ar):                     " << sizeof(ar) << std::endl;
    std::cout << "sizeof(ar[0]):                  " << sizeof(ar[0]) << std::endl;

    std::cout << std::endl;

    passAsArray(ar);
    passAsPointer(ar);

    std::cout << std::endl;
    std::cout << "---SIZE OF A NORMAL POINTER---" << std::endl;
    int *pointer = NULL;
    std::cout << "sizeof(pointer):                " << sizeof(pointer) << std::endl;
    std::cout << std::endl;

    return 0;
}

void passAsArray(int ar[]){
    std::cout << std::endl;
    std::cout << "---INSIDE FUNCTION PASSED AS ARRAY---" << std::endl;

    std::cout << "sizeof(ar)/sizeof(ar[0]):       " << sizeof(ar)/sizeof(ar[0]) << std::endl;
    std::cout << "sizeof(ar):                     " << sizeof(ar) << std::endl;
    std::cout << "sizeof(ar[0]):                  " << sizeof(ar[0]) << std::endl;

    std::cout << std::endl;
}

void passAsPointer(int *ar){
    std::cout << std::endl;
    std::cout << "---INSIDE FUNCTION PASSED AS POINTER---" << std::endl;

    std::cout << "sizeof(ar)/sizeof(ar[0]):       " << sizeof(ar)/sizeof(ar[0]) << std::endl;
    std::cout << "sizeof(ar):                     " << sizeof(ar) << std::endl;
    std::cout << "sizeof(ar[0]):                  " << sizeof(ar[0]) << std::endl;

    std::cout << std::endl;
}