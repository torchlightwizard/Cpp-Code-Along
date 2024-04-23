#include<iostream>

// A way to initialize member variables

class classy{
    public:
        classy(int a, int b) : x(a), y(b) {}
        int getx(){ return x; }
        int gety(){ return y; }
    private:
        int x;
        int y;
};

int main(void){
    classy obj(3,4);
    std::cout << obj.getx() << "  " << obj.gety() << "\n";
    
    return 0;
}