/**
 * @file
 */
/**
 * Main driver
 * This file must NOT be changed in any way other than including
 * additional headers if needed, and modifying the return of the
 * main function as noted.*/

#include <iostream>
#include "dog.h"
#include "dogmanager.h"
#include "dogtableprinter.h"

const int NUM_ARGS = 2;

/**
 * Main program entry point. You may NOT change anything in this function
 * except the exception type in the catch clause. See the TODO
 * @param argc: number of arguments given
 * @param argv: value of arguments (array)
 * @return
 */
int main(int argc, char const *argv[]) {
    if (argc < NUM_ARGS) {
        std::cout << "Correct usage:" << std::endl;
        std::cout << argv[0] << " filename" << std::endl;
        return 0;
    }
    std::string file = argv[1];
    try {
        DogManager dogManager(file);
        dogManager.printDogs();
        Dog oldest = dogManager.oldestDog();
        std::cout << "The oldest dog is " << oldest.getAge() << " years old." << std::endl;
        std::cout << "Its name is " << oldest.getName() << std::endl;
    }
    //TODO: Change this to the most appropriate exception type
    catch (std::invalid_argument &e) {
        std::cerr << "File " << file << e.what() << std::endl;
    }
}
