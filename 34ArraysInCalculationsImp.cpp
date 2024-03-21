#include<iostream>

int main(void){
    int ar[5] = {10,20,30,40,50};
    short len = *(&ar + 1) - ar;
    long sum = 0;

    std::cout << "Sizeof Size:- " << std::endl;
    std::cout << sizeof(ar)/sizeof(ar[0]) << std::endl;

    std::cout << "Other method experiments:-" << std::endl;
    std::cout << ar << std::endl;
    std::cout << ar + 1 << std::endl;   //this goes to next element of array
    std::cout << &ar << std::endl;
    std::cout << &ar + 1 << std::endl;   //this is actually going to end of array

    std::cout << "Best Way using pointers:-" << std::endl;
    std::cout << *(&ar + 1) - ar << std::endl;   //better as no function calls

    for(int i = 0; i < len; i++){
        sum += ar[i];
    }
    std::cout << "Sum:-" << std::endl;
    std::cout << sum << std::endl;
    return 0;
}