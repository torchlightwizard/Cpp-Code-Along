#include <iostream>
#include <string>

//wrong way
class MyClassWrongWay{
    public:
        std::string name;
};

//right way
class MyClassRightWay{
    private:
        std::string name;
    public:
        void setName(std::string x){
            name = x;
        }
        std::string getName(){
            return name;
        }
};

int main(void){
    //wrong way
    MyClassWrongWay obj;
    obj.name = "abc";
    std::cout << obj.name << std::endl;

    //right way
    MyClassRightWay obj2;
    obj2.setName("abc");
    std::cout << obj2.getName() << std::endl;

    //does getName return a copy of the name or address of it?
    std::string name = obj2.getName();
    name = "xyz";
    std::cout << obj2.getName() << std::endl;
    return 0;
}