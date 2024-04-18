#include<iostream>

// Deconstructors run when object is destroyed

// C++ destroyed objects when the function they are in ends or at the end of the program

// It does not take in parameters
// It does not return any value
// It cannot be overloaded

class OurClass{
    public:
    ~OurClass(){
        std::cout << "Object Destroyed\n";
    }
};

int main(void){
    OurClass obj;
    return 0;
}