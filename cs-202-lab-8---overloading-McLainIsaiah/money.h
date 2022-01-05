#ifndef _MONEY_H_
#define _MONEY_H_
#include<iostream>


class Money{
friend std::ostream &operator<<(std::ostream &out, const Money &rhs);
friend bool operator==(const Money &lhs, const Money &rhs);
friend bool operator>(const Money &lhs, const Money &rhs);

private:
  //attributes
  int dollars;
  int cents;
  float dollarsAndCents;

public:
  //default constructor
  Money() = default;

  //Overloaded construtor dollarsandcents
  Money(float dollarsAndCents);

  //Overloaded constructor
  Money(int dollars, int cents);

  int getDollars() const;
  int getCents() const;
  void setDollars(int nDollars);
  void setCents(int nCents);

  //Overloaded Member functions
  Money operator+(Money &rhs);
  Money operator-(Money &rhs);


};


#endif //_MONEY_H_
