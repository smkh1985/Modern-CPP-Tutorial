#include <iostream>

int main()
{
    int number;

    std::cout << "Enter a whole number: ";
    std::cin >> number;

    // 8 and 0 are even (no remainder); 7 is odd.
    if (number % 2 == 0)
    {
        std::cout << "The number is even.\n";
    }

    if (number % 2 != 0)
    {
        std::cout << "The number is odd.\n";
    }

    std::cout << "Number check complete.\n";
    return 0;
}
