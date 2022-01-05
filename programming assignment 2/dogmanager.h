#ifndef DOG_MANAGER_H
#define DOG_MANAGER_H
#include <vector>
#include <string>
#include <fstream>
#include "dog.h"

/**
*DogManager class, handles dog object input
**/

class DogManager {
private:
    std::vector<Dog> dogList;
    std::string filename;

public:
    DogManager() = default;
    DogManager(const std::string& filename);

    /**
    *opens file and loads each dog into a vector of dog objects
    *@param const std::string& filename -name of file
    **/
    void loadDogs(const std::string& filename);

    /**
    *Goes through vector of dogs and finds oldest dog in vector
    *@return
    **/
    const Dog& oldestDog();

    /**
    *Creates DogTablePrinter object and calls it's functions
    *to output dogs to console 
    **/
    void printDogs();
};

#endif //DOG_MANAGER_H
