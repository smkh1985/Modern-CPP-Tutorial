#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 12 || age >= 65)
    {
        std::cout << "Admission is free.\n";
    }
    else
    {
        std::cout << "A ticket is required.\n";
    }

    return 0;
}
