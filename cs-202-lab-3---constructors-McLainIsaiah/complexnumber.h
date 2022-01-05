#ifndef complexnumbers_h_
#define complexnumbers_h_
#include <iostream>
#include <string>

class ComplexNumber{
private:
  //Attributes
  int real1, imaginary1;

public:
  //Members

  //Constructors
  ComplexNumber();
  ComplexNumber(int nreal1, int nimaginary1);

  //Copy constructor
  ComplexNumber(const ComplexNumber& rhs);

  //Destructor
  ~ComplexNumber();

  //Getters
  int getReal() const;
  int getImaginary() const;

  //Setter
  void setReal(int nreal1);
  void setImaginary(int nimaginary1);

  //Other functions
  std::string add(const ComplexNumber& number) const;
  void print() const;

};


#endif //complexnumbers_h_
