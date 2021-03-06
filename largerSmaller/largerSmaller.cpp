// largerSmaller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int userInteger()
{
	std::cout << "Enter an integer: ";
	int x{}; // x lives
	std::cin >> x;
	return x;
}// x dies

int userLargerInteger()
{
	std::cout << "Enter a larger integer: ";
	int x{}; // x lives
	std::cin >> x;
	return x;
}// x dies

int main();

void printValues(int smallI, int largeI)
{
	std::cout << "The smaller value is " << smallI << "\n"
			  << "The larger value is " << largeI << "\n";
	main();
}

int main()
{
	int userI{ userInteger() }; //userI lives
	int userLargerI{ userLargerInteger() }; //userLargerI lives
		if (userI > userLargerI)
		{
			std::cout << "Swapping the values\n";
			int x{ userI }; //x lives
			userI = userLargerI;
			userLargerI = x;
		} // x dies
		printValues(userI, userLargerI);
}// UserI and userLargerI die


