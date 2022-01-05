#include "myfunctions.h"
#include <iostream>


double calculateAverage(int nums[]) {
    double sum = 0;
    for (int n = 0; n < DATA_SIZE; n++) {
        sum += nums[n];
    }
    return sum / DATA_SIZE;
}


void sayHello()
{
    std::cout << "Hello" << std::endl;
}
