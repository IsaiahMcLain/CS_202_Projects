#include "dogmanager.h"
#include "dogtableprinter.h"
#include <iostream>
#include <sstream>

DogManager::DogManager(const std::string& filename)
  :filename{filename} {
    loadDogs(filename);
}
void DogManager::loadDogs(const std::string& filename) {
  std::ifstream inputFile(filename);
  std::string animal_name;
  int animal_age;
  std::string animal_breed;

  //Reads each word and puts into corresponding variable
  if(inputFile.is_open()){
    while(inputFile >> animal_name >> animal_age >> animal_breed){
      Dog temp(animal_name, animal_age, animal_breed);
      dogList.push_back(temp);
    }

  }
  else{
    std::stringstream error;
    error << "could not be opened" << std::endl;
    throw(std::invalid_argument(error.str())); //Throws invalid_arguemnt type to catch block
  }
  int words {1}; //starts at 1 as first word wont be counted
  std::string word;
  //Resets file cursor position
  inputFile.clear();
  inputFile.seekg(0);
  while(inputFile >> word){
      words++;
  }
  inputFile.close();

  //Math determines if amount of words / 3 as each dog as 3 attributes is same as vector size
  if(dogList.size() != words/3) {
    std::stringstream error;
    error << " Data file not formatted correctly" << std::endl;
    throw(std::invalid_argument(error.str()));
  }
}

const Dog& DogManager::oldestDog(){
  int tracker {0}; //Tracks vector position
  int maxAge {0}; //Holds age

  for(size_t i = 0; i < dogList.size(); i++){
    if(dogList.at(i).getAge() > maxAge){
      maxAge = dogList.at(i).getAge();
    }
  }

  for(size_t i = 0; i < dogList.size(); i++){
    if(dogList.at(i).getAge() == maxAge){
      tracker = i;
    }
  }
  return dogList.at(tracker); //returns oldest dog in vector
}

void DogManager::printDogs(){
  DogTablePrinter dog; //Creates dogtableprinter object
  dog.printDogTable(dogList);
  //Calls mathod on object as the vector dogList is private in a diffrent class
  //and the other functions inside dogtableprinter are private so this works around that
}
