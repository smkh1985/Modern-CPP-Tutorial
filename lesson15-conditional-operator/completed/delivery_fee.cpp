#include <iostream>

using std::cout;
using std::cin;

int main()
{
    double orderTotal;

    cout << "Enter the order total: ";
    cin >> orderTotal;

    double deliveryFee = (orderTotal >= 50) ? 0.0 : 5.0;
    cout << "Delivery fee: $" << deliveryFee << '\n';

    return 0;
}
