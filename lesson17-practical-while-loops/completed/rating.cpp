#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int rating;

    cout << "Rate our service from 1 to 5: ";
    cin >> rating;

    while (rating < 1 || rating > 5)
    {
        cout << "Invalid rating. Enter a number from 1 to 5: ";
        cin >> rating;
    }

    cout << "Thank you! Your rating is " << rating << ".\n";

    return 0;
}
