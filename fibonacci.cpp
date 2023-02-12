/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Mike Z.; Genedy M.
Assignment: Lab 2D
 
 Computing Fibonacci Numbers with Loops and Arrays
*/

#include <stdio.h>
#include <iostream>

int main() {
  int arr[60];
  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i < 60; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }

  for (int i = 0; i < 60; i++) {
    std::cout << "F(" << i << ") = " << arr[i] << std::endl;
  }

  return 0;
}
