/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Mike Z.; Genedy M.
Assignment: Lab 2C
Input Valdiation
*/

#include <stdio.h>
#include <iostream>

int main() {
    const int size = 10;
    int array [size];
    int ind;
    int val;
    for (int i = 0; i < size; i++) {
        array[i] = 1;
      }
    do {
        for (int i = 0; i < size; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << "\n" << "Input index: " << std::endl;
        std::cin >> ind;
        
        std::cout << "Input value: " << std::endl;
        std::cin >> val;
        
        if (ind >= 0 && ind <10) {
            array[ind] = val;
        } else {
            std::cout << "Index out of range." << std::endl;
            break;
        }
    } while (ind >= 0 && ind <10);
    
    return 0;
}
