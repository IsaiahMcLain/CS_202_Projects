#include <iostream>
#include "complexnumber.h"

int main() {
  ComplexNumber group1(2,2);
  ComplexNumber group2(3,5);

  std::cout << "Addition result: " << group1.add(group2) << std::endl;

  ComplexNumber group3 = group2;

  std::cout << "First real and imaginary: ";
  group1.print();
  std::cout << "Second real and imaginary: ";
  group2.print();
  std::cout << "Group 3 which is a copy of group 2: ";
  group3.print();


  return 0;
}
