#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    vector<double> prices;
    double price;

    cout << "Enter each price. Enter 0 to finish.\n";
    cout << "Price: ";
    cin >> price;

    while (price != 0)
    {
        prices.push_back(price);
        cout << "Price: ";
        cin >> price;
    }

    double total = 0.0;
    for (int i = 0; i < prices.size(); i++)
    {
        total += prices[i];
    }

    cout << "Items: " << prices.size() << '\n';
    cout << "Total: " << total << '\n';

    cout << "Prices:\n";
    for (int i = 0; i < prices.size(); i++)
    {
        cout << prices[i] << '\n';
    }

    // An empty vector has no average: don't divide by zero.
    if (prices.size() > 0)
    {
        cout << "Average price: " << total / prices.size() << '\n';
    }

    return 0;
}
