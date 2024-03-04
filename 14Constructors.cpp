#include<iostream>
#include<string>

class MyClass{
    public:
    //constructor, same name as class
    //used to give variables an initial value
    MyClass(std::string nameIn){
        std::cout << "Created Object!\n";
        setName(nameIn);
    }
        void setName(std::string x){
            name = x;
        }
        std::string getName(){
            return name;
        }
    private:
        std::string name;
};

int main(void){
    MyClass a("Yoda");
    std::cout << a.getName();
    return 0;
}