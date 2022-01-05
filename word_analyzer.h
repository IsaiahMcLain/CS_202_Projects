#ifndef word_analyzer_h_
#define word_analyzer_h_
#include <string>
#include <iostream>


//Eliminates need for std:: use on these operands but doesn't include namespace
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;

//Takes the string created from array and runs through to count each char within the string obj.
int countCharacters(string word); 
//Runs through the string and uses range logic to count every character between passed in chars
int countLettersInRange(string word, char lower, char upper);
//Runs through the string and by using a for-loop with range logic counts every ASCII char that is capital 
int countUpperCaseLetters(string word);

#endif //word_analyzer_h
