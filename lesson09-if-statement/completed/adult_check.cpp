#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You are an adult.\n";
    }

    std::cout << "Age check complete.\n";
    return 0;
}
