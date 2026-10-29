#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    int ticketPrice = (age < 12) ? 5 : 10;

    cout << "Ticket price: $" << ticketPrice << '\n';

    return 0;
}
