#include <iostream>

//they are a way to group variables and functions together

class MyClass{   //declaring class
    public:   //access specifier
        void print(){
            std::cout << "Hi there!" << std::endl;
        }
};

int main(void){
    MyClass obj;
    obj.print();

    return 0;
}