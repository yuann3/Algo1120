// main.cpp
// Author: SENG1120 Staff
// Date: 27-07-2023
// Description: Main file for debugging and memory leak detection.
// Written as an example for SENG1120 Lab 3

#include <iostream>
#include "int_cell.h"

int main() 
{
	int_cell ic(3);
	std::cout << "ic = " << ic << std::endl;

	int_cell ic2 = ic + ic;
	std::cout << "ic2 = " << ic2 << std::endl;

	int_cell* ic_ptr = new int_cell(5);

	std::cout << "*ic_ptr = " << *ic_ptr << std::endl;
	
	int_cell ic3 = *ic_ptr + *ic_ptr;
	std::cout << "ic3 = " << ic3 << std::endl << std::endl;

	int_cell ic_left(2);
	int_cell ic_right(8);
	std::cout << "ic_left = " << ic_left << std::endl;
	std::cout << "ic_right = " << ic_right << std::endl;

	int_cell ic_result = ic_left + ic_right;
	std::cout << "ic_result = " << ic_result << std::endl;

	delete ic_ptr;

	return 0;
}