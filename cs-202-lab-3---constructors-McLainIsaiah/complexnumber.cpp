#include "complexnumber.h"
#include <string>

//Default constructor
ComplexNumber::ComplexNumber()
  : real1{0}, imaginary1{0} {
}

//Overloaded constructor
ComplexNumber::ComplexNumber(int nreal1, int nimaginary1)
  : real1{nreal1}, imaginary1{nimaginary1} {
}

//Copy Constructor
ComplexNumber::ComplexNumber(const ComplexNumber& rhs)
  : real1{rhs.real1}, imaginary1{rhs.imaginary1} {
}

//Destructor
ComplexNumber::~ComplexNumber() {
}

std::string ComplexNumber::add(const ComplexNumber& number) const {
  int realResult = getReal() + number.getReal();
  int imaginaryResult = getImaginary() + number.getImaginary();

  std::string result = std::to_string(realResult) + " + "
  + std::to_string(imaginaryResult) + "i"; 

  return result;
}

void ComplexNumber::print() const {
  std::cout << "Real Number: " << getReal() << ", Imaginary Number: "
  << getImaginary() << std::endl;
}

int ComplexNumber::getReal() const {
  return real1;
}

int ComplexNumber::getImaginary() const {
  return imaginary1;
}

void ComplexNumber::setReal(int nreal1) {
  real1 = nreal1;
}

void ComplexNumber::setImaginary(int nimaginary1) {
  imaginary1 = nimaginary1;
}
