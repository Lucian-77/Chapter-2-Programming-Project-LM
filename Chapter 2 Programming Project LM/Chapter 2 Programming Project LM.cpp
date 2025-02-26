// Chapter 2 Programming Project LM.cpp : This file contains the 'Energy Drink' function.
//

#include <iostream>

int main()
{
	std::cout << "How many people in our survey bought multiple drinks per week?\n";
	int tPeople = 16500;
	int mDPW = tPeople * 0.15;
	std::cout << "About 15% or " << mDPW << " people\n\n";
	std::cout << "How many of those people prefered citrus flavors?\n";
	int pCF = mDPW * 0.58;
	std::cout << "About 58% or " << pCF << " people\n";
}
