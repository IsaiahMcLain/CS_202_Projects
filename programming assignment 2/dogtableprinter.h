#ifndef DOGTABLEPRINTER_H
#define DOGTABLEPRINTER_H
#include <vector>
#include "dog.h"

/**
*DogTablePrinter class, handles program output
**/
class DogTablePrinter {
public:
  /**
  *takes vector of dog
  *objects and prints them to the screen
  *@param std::vector<Dog>& dogs -vector of dog objects
  **/
    void printDogTable(const std::vector<Dog>& dogs);

private:
  /**
  *Prints header to the console
  **/
    void printHeader(); // utility function that generates the table header
    /**
    *Prints dog object's attributes to screen
    *@param const Dog& dog - Takes dog object
    **/
    void dogPrinter(const Dog& dog); // prints the information for a dog. Use to print each row of the table
};

#endif //DOGTABLEPRINTER_H
