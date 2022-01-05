#include "boat.h"

Boat::Boat(std::string name, int length, bool isSeaWorthy)
  :name{name}, length{length}, isSeaWorthy{isSeaWorthy} {

}

void Boat::sink() {
  std::cout << "I am a boat that is sinking." << std::endl;
}

int Boat::getLength() const {
  return length;
}

bool Boat::getSeaWorthiness() const {
  return isSeaWorthy;
}

std::string Boat::getName() const {
  return name;
}

void Boat::setLength(int nlength) {
  length = nlength;
}

void Boat::setSeaWorthiness(bool nisSeaWorthy) {
  isSeaWorthy = nisSeaWorthy;
}
void Boat::setName(std::string nname) {
  name = nname;
}
