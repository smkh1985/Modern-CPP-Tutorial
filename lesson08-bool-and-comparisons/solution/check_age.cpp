#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // 17 gives true; 18 and 19 give false.
    bool isMinor = age < 18;
    std::cout << std::boolalpha;
    std::cout << "Are you a minor? " << isMinor << "\n";
    return 0;
}
