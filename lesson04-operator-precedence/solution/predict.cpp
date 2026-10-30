#include <iostream>

int main()
{
    // Division comes before subtraction: 4 / 2 is 2, and 10 - 2 is 8.
    std::cout << "10 - 4 / 2   = " << 10 - 4 / 2 << "\n";

    // Parentheses come first: 10 - 4 is 6, and 6 / 2 is 3.
    std::cout << "(10 - 4) / 2 = " << (10 - 4) / 2 << "\n";
    return 0;
}
