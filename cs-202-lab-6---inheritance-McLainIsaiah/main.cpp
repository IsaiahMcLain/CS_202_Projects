#include "sailboat.h"
#include "boat.h"
#include<vector>
#include<memory>
#include<iostream>


int main() {
  std::vector<std::unique_ptr<Boat>> boats;

  std::unique_ptr<SailBoat> ptr1 {new SailBoat{3, "Esmerelda", 12, true}};
  std::unique_ptr<SailBoat> ptr2 {new SailBoat{6, "Han", 21, true}};
  std::unique_ptr<Boat> ptr3 {new Boat{"Titanic", 44, false}};

  boats.push_back(std::move(ptr1));
  boats.push_back(std::move(ptr2));
  boats.push_back(std::move(ptr3));

  for(const auto& i : boats){
    i->sink();
  }

  return 0;
}
