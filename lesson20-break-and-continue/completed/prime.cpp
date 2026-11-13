#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int number;

    cout << "Enter a whole number greater than 1: ";
    cin >> number;

    while (number < 2)
    {
        cout << "Enter a whole number greater than 1: ";
        cin >> number;
    }

    bool isPrime = true;
    int divisor = 2;

    while (divisor < number)
    {
        cout << "Checking divisor: " << divisor << '\n';

        if (number % divisor == 0)
        {
            isPrime = false;
            break;
        }

        divisor++;
    }

    if (isPrime)
    {
        cout << number << " is prime.\n";
    }
    else
    {
        cout << number << " is not prime.\n";
    }

    return 0;
}
