#include <iostream>

using std::cout;

int main()
{
    // Start at 10, keep going while counter >= 1, and count down by one.
    for (int counter = 10; counter >= 1; counter--)
    {
        cout << counter << '\n';
    }

    cout << "Liftoff!\n";

    return 0;
}
