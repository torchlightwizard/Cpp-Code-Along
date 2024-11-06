#include<iostream>
#include "birthday.h"
#include "people.h"

// Composition: Objects as members of other objects

// How can we create a new object inside the class as a member?
// Like private:
//         classy obj(a, b, c);
// how do we initialize this?
// Instead of just passing in an already created object from outside

// Object inside class (member) also needs intitialization list to be initialized


int main(void){
    birthday birthObj(1, 1, 1111);
    people peopleObj("Billy", birthObj);
    peopleObj.print();
    
    return 0;
}