#include <iostream>


int main()
{

    // A test of how a while loop reads user input numbers
    std::cout << "Introduce a series of numbers: " << std::endl;
    int var = 0;
    while (std::cin >> var) { // It reads a number for each cycle ??
        std::cout << var << std::endl;

    }
    return 0;

}