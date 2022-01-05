#include "dog.h"

Dog::Dog(std::string name, int age, std::string breed)
  :name{name}, age{age}, breed{breed} {

}

std::string Dog::getName() const {
  return name;
}

int Dog::getAge() const {
  return age;
}

std::string Dog::getBreed() const {
  return breed;
}
