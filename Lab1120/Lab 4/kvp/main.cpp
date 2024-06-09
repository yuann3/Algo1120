// SENG1120 - main.cpp
// -----------------------------------------------
// A simple program to demonstrate the use of the 
// key_value_pair class.
//
// Author: Kyle Harrison  04/08/2023
// -----------------------------------------------

#include <iostream>
#include "key_value_pair.h"

int main()
{
    key_value_pair kvp1(1, "Item1");
    key_value_pair kvp2(2, "Item2");

    std::cout << "kvp1: " << kvp1 << std::endl;
    std::cout << "kvp2: " << kvp2 << std::endl;
    std::cout << "kvp1 < kvp2: " << (kvp1 < kvp2) << std::endl;
    std::cout << "kvp1 > kvp2: " << (kvp1 > kvp2) << std::endl;
    std::cout << "kvp1 == kvp2: " << (kvp1 == kvp2) << std::endl;
    std::cout << "kvp1 == kvp1: " << (kvp1 == kvp1) << std::endl;

    
}