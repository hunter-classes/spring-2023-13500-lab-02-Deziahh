/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Mike Z.; Genedy M.
Assignment: Lab2B

Print all integers from the requested interval
*/

#include <iostream>
#include "funcs.h"

int main() {
  int lower, upper;
  std::cout << "Enter the lower limit: ";
  std::cin >> lower;
  std::cout << "Enter the upper limit: ";
  std::cin >> upper;
    
  print_interval(lower, upper-1);
  return 0;
}
