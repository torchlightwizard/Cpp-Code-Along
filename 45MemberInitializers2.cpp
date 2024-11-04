#include<iostream>

// We cant initialize const members inside our constructor
// But we can use an initializer list to initialize the const member

class classy{
    public:
        classy(int a) : x(a) {}
        int getx(){ return x; }
    private:
        const int x;
};

int main(void){
    classy obj(9);
    std::cout << obj.getx() << "\n";
    
    return 0;
}