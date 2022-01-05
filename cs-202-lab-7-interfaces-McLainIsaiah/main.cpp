#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <vector>
#include <memory>

int main() {
  std::vector<std::shared_ptr<Petable>> pettablePets;
  std::shared_ptr<Petable> dog1 {std::make_shared<Dog>(10, "brown")};
  std::shared_ptr<Petable> dog2 {std::make_shared<Dog>(12, "red")};
  std::shared_ptr<Petable> dog3 {std::make_shared<Dog>(2, "white")};

  std::shared_ptr<Petable> cat1 {std::make_shared<Cat>(3, "Tabby")};
  std::shared_ptr<Petable> cat2 {std::make_shared<Cat>(7, "Simese")};
  std::shared_ptr<Petable> cat3 {std::make_shared<Cat>(13, "HouseCat")};

  pettablePets.push_back(dog1);
  pettablePets.push_back(dog2);
  pettablePets.push_back(dog3);
  pettablePets.push_back(cat1);
  pettablePets.push_back(cat2);
  pettablePets.push_back(cat3);

  for(const auto &i: pettablePets){
    i->pet();
  }

  std::vector<Dog> dogs;
  Dog dog4 {3, "spotted black and white"};
  Dog dog5 {4, "brindle"};
  Dog dog6 {1, "white"};

  dogs.push_back(dog4);
  dogs.push_back(dog5);
  dogs.push_back(dog6);

  for(Dog i : dogs){
    std::cout << i;
  }

  return 0;
}
