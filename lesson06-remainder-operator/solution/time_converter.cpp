#include <iostream>

int main()
{
    // Predictions: 60 seconds is 1 minute and 0 seconds; 61 seconds is 1 minute and 1 second.
    int totalSeconds;

    std::cout << "Enter a number of seconds: ";
    std::cin >> totalSeconds;

    // Bonus: hours first, then what's left over for the minutes and the seconds.
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    std::cout << totalSeconds << " seconds is " << hours << " hours, " << minutes
              << " minutes and " << seconds << " seconds.\n";
    return 0;
}
