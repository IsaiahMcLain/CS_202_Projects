#include "money.h"

Money::Money(int dollars, int cents)
  :dollars{dollars}, cents{cents} {

}

Money::Money(float dollarsAndCents)
  :dollarsAndCents{dollarsAndCents} {
    dollars = static_cast<int>(dollarsAndCents);
    cents = (dollarsAndCents - dollars + .01) * 100;
}

int Money::getDollars() const {
  return dollars;
}

int Money::getCents() const {
  return cents;
}

void Money::setDollars(int ndollars) {
  dollars = ndollars;
}

void Money::setCents(int nCents) {
  cents = nCents;
}

//Overloaded insertion operator
std::ostream &operator<<(std::ostream &out, const Money &rhs) {
  out << "Dollars: $" << rhs.dollars << "." << rhs.cents << std::endl;
  return out;
}

//Overloaded comparison operator
bool operator==(const Money &lhs, const Money &rhs) {
  return (lhs.dollars == rhs.dollars && lhs.cents == rhs.cents);
}

bool operator>(const Money &lhs, const Money &rhs) {
  return (lhs.dollars > rhs.dollars && lhs.cents > rhs.cents);
}

//Overloaded addition operator
Money Money::operator+(Money &rhs) {
  Money temp;
  temp.setDollars(this->dollars + rhs.dollars);
  temp.setCents(this->cents + rhs.cents);

  return temp;
}

Money Money::operator-(Money &rhs) {
  Money temp;
  temp.setDollars(this->dollars - rhs.dollars);
  temp.setCents(this->cents - rhs.cents);

  return temp;
}
