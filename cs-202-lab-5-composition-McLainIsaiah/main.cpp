#include <iostream>
#include "person.h"

int main() {
    Person patient("Sam", 65, 50);

    patient.getHeartRate();
    patient.run();
    patient.walk();

    return 0;
}
