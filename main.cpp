#include <iostream>

#include "Reverser.h"

int main() {
  Reverser r;
  int num = 1234;
  int reversedNum = r.reverseDigit(num);
  std::cout << "Reversed number is " << reversedNum << std::endl;
  string characters = "Hello";
  string revString = r.reverseString(characters);
  std::cout << "Reversed string is " << revString << std::endl;
  return 0;
}