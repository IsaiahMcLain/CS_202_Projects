#ifndef BOAT_H
#define BOAT_H
#include <iostream>
#include <string>

class Boat {
protected:
    std::string name;
    int length;
    bool isSeaWorthy;

public:
    //Default
    Boat() = default;

    //Overloaded constructor
    Boat(std::string name, int length, bool isSeaWorthy);

    /**
     * Prints "I am a boat that is sinking"
     */
    virtual void sink();

    //Getters
    int getLength() const;
    bool getSeaWorthiness() const;
    std::string getName() const;

    //Setters
    void setLength(int nlength);
    void setSeaWorthiness(bool nisSeaWorthy);
    void setName(std::string nname);
};


#endif
