#include <iostream>

using std::cout;
using std::cin;

int main()
{
    double total = 0.0;
    double price;

    cout << "Enter each item price. Enter 0 to finish.\n";

    cout << "Item price: ";
    cin >> price;

    while (price != 0)
    {
        total = total + price;

        cout << "Item price: ";
        cin >> price;
    }

    cout << "Shopping total: $" << total << '\n';

    return 0;
}

