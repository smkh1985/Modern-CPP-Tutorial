#include <iostream>

int main()
{
    int number;

    std::cout << "Enter a whole number: ";
    std::cin >> number;

    if (number % 2 != 0)
    {
        std::cout << "The number is odd.\n";
    }

    std::cout << "Number check complete.\n";
    return 0;
}
