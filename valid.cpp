/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Mike Z.; Genedy M.
Assignment: Lab 2a

Input Valdiation
*/

#include <iostream>

int main() {
  int num;
  do {
    std::cout << "Enter an integer: ";
    std::cin >> num;
  } while (num <= 0 || num >= 100);

  int square = num * num;
  std::cout << "The square of " << num << " is " << square << std::endl;
  return 0;
}
