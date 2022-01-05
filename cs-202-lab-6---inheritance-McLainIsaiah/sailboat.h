#ifndef SAILBOAT_H
#define SAILBOAT_H
#include "boat.h"

class SailBoat: public Boat{
  int numSails;
public:
    SailBoat() = default;
    SailBoat(int numSails, std::string name, int length,
    bool isSeaWorthy);

    /**
     * Prints out "I am a sailboat sinking"
     */
    void sink() override;

    int getNumSails() const;
    void setNumSails(int nnumSails);

};
#endif //SAILBOAT_H
