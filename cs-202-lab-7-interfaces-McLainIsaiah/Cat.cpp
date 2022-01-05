#include "Cat.h"

Cat::Cat(int age, const std::string &breed)
  :Animal(age), breed(breed) {

}

void Cat::pet() {
  std::cout << "purr" << std::endl; 
}
