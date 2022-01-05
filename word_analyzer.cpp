#include "word_analyzer.h"
#include <cstring>

int countCharacters(std::string word){
  int characters = 0;
  char c = 39; //ASCII value for '

  //Runs through string and counts every char != to ' or a space
  for(size_t index = 0; index < word.size(); index++){
    if(word[index] != ' ' && word[index] != c){
      characters++;
    }
  }
  return characters;
}

int countUpperCaseLetters(string word) {
  int upperCase = 0;

  //Runs through range between A and Z
  for(size_t index = 0; index < word.size(); index++){
    if(word[index] >= 'A' && word[index] <= 'Z'){
      upperCase++;
    }
  }
  return upperCase;
}

int countLettersInRange(string characters, char lower, char upper){
  int lettersInBetween = 0;

  //Runs through range like previous function but between specified chars
  for(size_t index = 0; index < characters.size(); index++){
    if(characters[index] >= lower && characters[index] <= upper){
      lettersInBetween++;
    }
  }
  return lettersInBetween;
}
