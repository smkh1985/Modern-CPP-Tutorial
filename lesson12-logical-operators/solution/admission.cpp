#include <iostream>

int main()
{
    int age;
    bool isOpen = true;  // try false too

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Without the parentheses, && would be checked first.
    if ((age < 12 || age >= 65) && isOpen)
    {
        std::cout << "Admission is free.\n";
    }
    else
    {
        std::cout << "A ticket is required.\n";
    }

    return 0;
}
