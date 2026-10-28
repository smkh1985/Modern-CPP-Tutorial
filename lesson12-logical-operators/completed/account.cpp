#include <iostream>

int main()
{
    bool isActive = true;

    if (!isActive)
    {
        std::cout << "Please activate your account.\n";
    }

    std::cout << "Account check complete.\n";
    return 0;
}
