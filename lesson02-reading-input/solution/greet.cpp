#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "Welcome, " << name << "! Let's learn C++!\n";
    return 0;
}
