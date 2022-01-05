#include "sailboat.h"

SailBoat::SailBoat(int numSails, std::string name, int length,
bool isSeaWorthy)
  :numSails{numSails}, Boat{name, length, isSeaWorthy} {

}

void SailBoat::sink() {
  std::cout << "I am a sailboat sinking." << std::endl;
}

int SailBoat::getNumSails() const {
  return numSails;
}

void SailBoat::setNumSails(int nnumSails) {
  numSails = nnumSails;
}
