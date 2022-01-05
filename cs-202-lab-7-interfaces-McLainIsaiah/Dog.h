#ifndef CODE2_DOG_H
#define CODE2_DOG_H
#include <string>
#include <iostream>
#include "Animal.h"
#include "petable.h"

class Dog : public Animal, public Petable {
friend std::ostream &operator<<(std::ostream &out, const Dog& obj);

private:
    std::string hairColor;

public:
    Dog(int age, const std::string &hairColor);
    virtual ~Dog() {};

    virtual void pet() override;
};

#endif //CODE2_DOG_H
