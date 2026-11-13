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

    return 0;
}
