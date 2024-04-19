#include<iostream>

// constant objects can only call constant functions
// kind of like how static functions can only use static member variables

// Note

class classy{
    public:
        void normalFunc();
        const void constFunc1();   //this works too!
        void constFunc2() const;
};

void classy::normalFunc(){
    std::cout << "Normal Function\n";
}

const void classy::constFunc1(){
    std::cout << "Constant Function 1\n";
}

void classy::constFunc2() const{
    std::cout << "Constant Function 2\n";
}

int main(void){
    classy obj;
    obj.normalFunc();
    obj.constFunc1();
    obj.constFunc2();

    std::cout << std::endl;

    const classy constObj;
    // constObj.constFunc1();   //this does not work with const object
    constObj.constFunc2();

    return 0;
}