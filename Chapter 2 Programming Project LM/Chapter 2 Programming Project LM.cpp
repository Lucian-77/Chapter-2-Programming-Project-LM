// Chapter 2 Programming Project LM.cpp : This file contains the 'Energy Drink' function.
//

#include <iostream>

int main()
{
	std::cout << "How many people in our survey bought multiple drinks per week?\n";
	int tPeople = 16500;
	double pOF = 0.15;
	int mDPW = tPeople * pOF;
	std::cout << "About 15% or " << mDPW << " people\n" << "\n";
	std::cout << "How many of those people prefered citrus flavors?\n";
	double pFE = 0.58;
	int pCF = mDPW * pFE;
	std::cout << "About 58% or " << pCF << " people\n";
}
