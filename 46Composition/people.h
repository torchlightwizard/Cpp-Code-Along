#ifndef PEOPLE_H
#define PEOPLE_H

#include "birthday.h"

// here we pass the whole other object in, instead of creating a new one inside the class
class people{
    public:
        people(std::string x, birthday y);
        void print();
    private:
        std::string name;
        birthday birthdate;
};

#endif