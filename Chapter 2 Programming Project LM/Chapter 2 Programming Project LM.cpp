// Chapter 2 Programming Project LM.cpp : This file contains the 'Ocean Level' function.
//

#include <iostream>

int main()
{
    std::cout << "How much higher will the sea level be in x years?\n";
    double rOChange = 1.5;
    int five = 5;
    double fydOceanLevel = five * rOChange;
    std::cout << "5: " << fydOceanLevel << "mm higher\n";
    int seven = 7;
    double sydOceanLevel = seven * rOChange;
    std::cout << "7: " << sydOceanLevel << "mm higher\n";
    int ten = 10;
    double tydOceanLevel = ten * rOChange;
    std::cout << "10: " << tydOceanLevel << "mm higher\n";
}
