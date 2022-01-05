#include "dogtableprinter.h"
#include <iostream>

void DogTablePrinter::printDogTable(const std::vector<Dog>& dogs){
  printHeader();

  for(size_t i = 0; i < dogs.size(); i++){
    dogPrinter(dogs.at(i));
  }

}

void DogTablePrinter::printHeader(){
  std::cout << "Name    Age     Breed " << std::endl;
  std::cout << "====================== " << std::endl;
}

void DogTablePrinter::dogPrinter(const Dog& dog){
  std::cout << dog.getName() << "   " << dog.getAge()
  << "      " << dog.getBreed() << std::endl;
}
