#include <iostream>

using std::cout;
using std::cin;

int main()
{
    double total = 0.0;
    double price;
    int itemCount = 0;

    cout << "Enter each item price. Enter 0 to finish.\n";

    cout << "Item price: ";
    cin >> price;

    while (price != 0)
    {
        total = total + price;
        itemCount = itemCount + 1;

        cout << "Item price: ";
        cin >> price;
    }

    cout << "Number of items: " << itemCount << '\n';
    cout << "Shopping total: $" << total << '\n';

    return 0;
}
