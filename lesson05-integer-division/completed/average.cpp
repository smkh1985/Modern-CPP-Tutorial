#include <iostream>

int main()
{
    int first;
    int second;

    std::cout << "Enter the first number: ";
    std::cin >> first;

    std::cout << "Enter the second number: ";
    std::cin >> second;

    double average = (static_cast<double>(first) + second) / 2;
    std::cout << "The average is " << average << "\n";
    return 0;
}
