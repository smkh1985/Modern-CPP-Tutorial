#include <iostream>

int main()
{
    int first;
    int second;

    std::cout << "Enter the first number: ";
    std::cin >> first;

    std::cout << "Enter the second number: ";
    std::cin >> second;

    // 2.0 is a double, so the division keeps the decimals: 4 and 5 give 4.5, 7 and 8 give 7.5.
    double average = (first + second) / 2.0;
    std::cout << "The average is " << average << "\n";
    return 0;
}
