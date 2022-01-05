#ifndef DOG_H
#define DOG_H
#include <string>

/**
*Class dog - Contains all the information for dog attributes
**/
class Dog {
    std::string name;  // name of the dog
    int age;      // its age in years
    std::string breed; // the dog breed (Terrier, Bloodhound, etc.

public:
    Dog() = default;//keyword that tells compiler to use default provided constructor
    Dog(std::string name, int age, std::string breed);

    /**
    *Gets name of dog
    *@return
    **/
    std::string getName() const;

    /**
    *Gets age of dog
    *@return
    **/
    int getAge() const;

    /**
    *Gets breed of dog
    *@return
    **/
    std::string getBreed() const;
};

#endif //DOG_H
