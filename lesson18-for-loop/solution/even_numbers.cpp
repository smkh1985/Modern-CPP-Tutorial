#include <iostream>

using std::cout;

int main()
{
    // Start at 2, keep going while number <= 20, and step by two.
    for (int number = 2; number <= 20; number += 2)
    {
        cout << number << '\n';
    }

    return 0;
}
