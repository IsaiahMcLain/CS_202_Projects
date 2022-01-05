#include "person.h"

//Overloaded constructor
Person::Person(std::string name, int age, int rate)
  :name{name}, age{age}, heart{rate}{

}

void Person::run(){
  heart.rateSetter(130);
  getHeartRate();
}

void Person::walk(){
  heart.rateSetter(60);
  getHeartRate();
}

void Person::getHeartRate(){
  std::cout << heart.rateGetter() << std::endl;
}
