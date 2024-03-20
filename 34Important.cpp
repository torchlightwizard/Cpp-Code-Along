#include<iostream>

// The using the pointer method inside a function is wrong
// As it does not give detect the end of array using &ar+1

void passAsArray(int ar[]);
void passAsPointer(int *ar);

int main(void){
    int ar[5] = {10,20,30,40,50};

    std::cout << std::endl;
    std::cout << "---INSIDE MAIN---" << std::endl;

    std::cout << "Sizeof method:                 " << sizeof(ar)/sizeof(ar[0]) << std::endl;

    std::cout << "Other method experiments:      " << ar << " ";
    std::cout << ar + 1 << " ";   //this goes to next element of array
    std::cout << &ar << " ";
    std::cout << &ar + 1 << std::endl;   //this is actually going to end of array

    std::cout << "Size using pointers:           " << *(&ar + 1) - ar << std::endl;   //better as no function calls
    std::cout << std::endl;

    passAsArray(ar);
    passAsPointer(ar);

    return 0;
}

void passAsArray(int ar[]){
    std::cout << std::endl;
    std::cout << "---INSIDE FUNCTION PASSED AS ARRAY---" << std::endl;

    std::cout << "Sizeof method:                 " << sizeof(ar)/sizeof(ar[0]) << std::endl;

    std::cout << "Other method experiments:      " << ar << " ";
    std::cout << ar + 1 << " ";   //this goes to next element of array
    std::cout << &ar << " ";
    std::cout << &ar + 1 << std::endl;   //this is actually going to end of array

    std::cout << "Size using pointers:           " << *(&ar + 1) - ar << std::endl;   //better as no function calls
    std::cout << std::endl;
}

void passAsPointer(int *ar){
    std::cout << std::endl;
    std::cout << "---INSIDE FUNCTION PASSED AS POINTER---" << std::endl;

    std::cout << "Sizeof method:                 " << sizeof(ar)/sizeof(ar[0]) << std::endl;

    std::cout << "Other method experiments:      " << ar << " ";
    std::cout << ar + 1 << " ";   //this goes to next element of array
    std::cout << &ar << " ";
    std::cout << &ar + 1 << std::endl;   //this is actually going to end of array

    std::cout << "Size using pointers:           " << *(&ar + 1) - ar << std::endl;   //better as no function calls
    std::cout << std::endl;
}