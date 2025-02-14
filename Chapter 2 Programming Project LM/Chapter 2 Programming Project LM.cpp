// Chapter 2 Programming Project LM.cpp : This file contains the 'Tank of Gas' function.
//

#include <iostream>

int main()
{
	std::cout << "How many miles can I go with a full tank of gas in town vs on the highway?\n";
	int gTank = 20;
	double dITown = 23.5;
	double dTown = gTank * dITown;
	std::cout << "In town: " << dTown << " miles\n";
	double dOHigh = 28.9;
	double dHigh = gTank * dOHigh;
	std::cout << "On the highway: " << dHigh << " miles\n";
}
