#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    for (int multiplier = 1; multiplier <= 10; multiplier++)
    {
        int product = number * multiplier;

        cout << number << " x " << multiplier
             << " = " << product << '\n';
    }

    return 0;
}
