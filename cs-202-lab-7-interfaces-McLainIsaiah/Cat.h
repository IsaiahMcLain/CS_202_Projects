#ifndef CODE2_CAT_H
#define CODE2_CAT_H
#include "Animal.h"
#include "petable.h"
#include <iostream>
#include <string>

class Cat : public Animal, public Petable {
    std::string breed;

public:
    Cat(int age, const std::string &breed);
    virtual ~Cat() {};

    virtual void pet() override;
};

#endif //CODE2_CAT_H
