#include "myfunctions.h"
#include <iostream>

//Outputs a hello message and outputs the average value calculated
int main()
{
    sayHello();
    int nums[DATA_SIZE];
    for (int i = 0; i < DATA_SIZE; i++){
        *(nums + i) = i;
    }
        double average = calculateAverage(nums);
    std::cout << "Average Value: " << average << std::endl;
    return 0;
}
