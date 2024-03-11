#include<iostream>

// default args need to be in prototype*
int volume(int l=1, int w=1, int h=1);

int main(void){
    std::cout << volume() << "   -:Default Arguments are 1\n";
    std::cout << volume(4) << "   -:Actual values put in (Length)\n";
    std::cout << volume(4,5) << "   -:Actual values put in (Area)\n";
    std::cout << volume(4,5,5) << "   -:Actual values put in (Volume)\n";
    //problem, we checked the case where the user didnt put any value, but what if he put some values
    return 0;
}

int volume(int l, int w, int h){
    return l*w*h;
}