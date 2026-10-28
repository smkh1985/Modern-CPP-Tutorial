#include <iostream>

int main()
{
    int totalSeconds;

    std::cout << "Enter a number of seconds: ";
    std::cin >> totalSeconds;

    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    std::cout << totalSeconds << " seconds is " << minutes
              << " minutes and " << seconds << " seconds.\n";
    return 0;
}
