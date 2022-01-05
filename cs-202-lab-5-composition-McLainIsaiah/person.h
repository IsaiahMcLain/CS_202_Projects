#ifndef _PERSON_H_
#define _PERSON_H_
#include "heart.h"
#include <string>
#include<iostream>

class Person {
    std::string name;
    int age{0};
    Heart heart;

public:
  //Overloaded constructor
    Person(std::string name, int age, int rate);

    void run();
    void walk();
    void getHeartRate();
};

#endif //_PERSON_H_
