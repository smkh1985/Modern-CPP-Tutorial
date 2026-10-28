#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    bool isAdult = age >= 18;
    std::cout << std::boolalpha;
    std::cout << "Are you an adult? " << isAdult << "\n";
    return 0;
}
