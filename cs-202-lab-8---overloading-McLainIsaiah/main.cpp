#include <iostream>
#include "money.h"

// DO NOT ALTER THE MAIN FUNCTION
int main() {
    Money myMoney(12.23); // 12 dollars and 23 cents
    Money myOtherMoney(12.23);
    Money yourMoney(14, 24); // 14 dollars and 24 cents
    std::cout << "My money: " << myMoney << std::endl; // this should print "My money: $12.23"
    std::cout << "Your money:" << yourMoney << std::endl;
    if (myMoney > yourMoney) {
        std::cout << "I have more money than you" << std::endl;
    }
    if (myMoney == myOtherMoney) {
        std::cout << "The amounts are the same" << std::endl;
    }
    Money difference = yourMoney - myMoney;
    std::cout << "The between yours and my money is " << difference << std::endl;

    Money sum = myMoney + yourMoney;
    std::cout << "Together, we have " << sum << std::endl;
}
