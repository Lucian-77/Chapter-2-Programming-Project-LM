// Chapter 2 Programming Project LM.cpp : This file contains the 'Ocean Level' function.
//

#include <iostream>

int main()
{
    std::cout << "How much higher will the sea level be in x years?\n";
    double rOChange = 1.5;
    double fydOceanLevel = 5 * rOChange;
    std::cout << "5: " << fydOceanLevel << "mm higher\n";
    double sydOceanLevel = 7 * rOChange;
    std::cout << "7: " << sydOceanLevel << "mm higher\n";
    double tydOceanLevel = 10 * rOChange;
    std::cout << "10: " << tydOceanLevel << "mm higher\n";
}
