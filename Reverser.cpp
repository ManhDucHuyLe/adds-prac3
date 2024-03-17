#include "Reverser.h"

#include <cmath>
#include <iostream>

Reverser::Reverser() {}

int Reverser::reverseDigit(int value) {
  if (value < 0 || value > 9) {
        return -1;
  }
  string strNum = to_string(value);
  int l = strNum.length();
  if (value < 10) {
    return value;
  } else {
    int a = value % 10;
    a *= pow(10, l - 1);
    a += reverseDigit(value / 10);
    return a;
  }
}

string Reverser::reverseString(string characters) {
  int l = characters.length();
  int e = characters.empty();
  if (l == 1 || e) {
    return "ERROR";
  } else {
    char a = characters[l - 1];
    string reversedSubstring = reverseString(characters.substr(0, l - 1));
    return a + reversedSubstring;
  }
}
