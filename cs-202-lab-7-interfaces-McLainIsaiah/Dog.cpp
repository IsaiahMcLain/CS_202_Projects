#include "Dog.h"

Dog::Dog(int age, const std::string &hairColor)
  :Animal(age), hairColor(hairColor) {

}

void Dog::pet() {
  std::cout << "Wow, that is nice. Thanks."
  <<  " I really appreciate this." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Dog& obj){
  out << obj.hairColor << std::endl;
  return out;
}
