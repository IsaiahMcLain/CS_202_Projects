#include "word_analyzer.h"
#include <fstream> //For I/O file

//Prototypes
int getWords(int size, string words[], const string fileName);
string findLongestWord(int size, string words[]);

int main(int argc, char **argv){
  //Tests to see if two arguments were passed into mian from terminal
  if(argc != 2){
    cout << "Usage: " << endl;
    cout << "./text_analyzer filename" << endl;
    exit(1);
  }

  //Sets filename to second argument passed into main from terminal
  string fileName(argv[1]);

  int size = 100;

  string words[size] = {};

  int wordCount = getWords(size, words, fileName);
  if( wordCount == -1)
    cout << "The file was unable to be opened" << endl;

  string wordsSentence;
  //Runs through array and concatenates it into a string
  for(int index = 0; index < wordCount; index++){
    wordsSentence += words[index] + " ";
  }

  int characters = countCharacters(wordsSentence);
  cout << "There are " << characters << " characters in your file." << endl;

  int upperCaseLetters = countUpperCaseLetters(wordsSentence);
  cout << "There are " << upperCaseLetters << " upper case letters in your file."
  << endl;

  int lettersInRange = countLettersInRange(wordsSentence, 'c', 'g');
  cout << "There are " << lettersInRange << " between 'c' and 'g' in your file."
  << endl;

  string longestWord = findLongestWord(wordCount, words);
  cout << "The longest word in your file is '" << longestWord << "'." << endl;

  return 0;
}

int getWords(int size, string words[], const string fileName){
  ifstream inputFile(fileName);
  size = 0;

  //Reads from file
  if(inputFile.is_open()){
    while(inputFile >> words[size]){
      ++size;
      //helps prevent error of going out of bounds on hardset array
      if(size > 100){
        return(-1);
      }
    }
    inputFile.close();
  }
  else{
    return(-1);
  }
  return size;
}

string findLongestWord(int size, string words[]){
  string longestWord;

  //Runs through array and determines strings size, if the size is bigger than
  //what is assigned to longestWord then it gets replaced.
  for(size_t index = 0; index < size; index++){
    if(words[index].size() > longestWord.size())
      longestWord = words[index];
  }
  return longestWord;
}
