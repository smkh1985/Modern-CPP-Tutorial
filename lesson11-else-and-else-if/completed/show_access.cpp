#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You can watch the show alone.\n";
    }
    else
    {
        std::cout << "You need a parent's approval.\n";
    }

    return 0;
}
