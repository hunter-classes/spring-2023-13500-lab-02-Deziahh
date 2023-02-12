/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Mike Z.; Genedy M.
Assignment: Lab2B

Print all integers from the requested interval
*/

#include <iostream>

void print_interval(int L, int U) {
    for (int i = L; i <= U; i++) {
        std::cout << i << " ";
      }
      std::cout << std::endl;
    }
