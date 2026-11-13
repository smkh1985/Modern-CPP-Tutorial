#include <iostream>

using std::cout;
using std::cin;

int main()
{
    char answer;

    do
    {
        double number1;
        double number2;

        cout << "Enter the first number: ";
        cin >> number1;

        cout << "Enter the second number: ";
        cin >> number2;

        cout << "Sum: " << number1 + number2 << '\n';

        cout << "Calculate again? (y/n): ";
        cin >> answer;

    } while (answer == 'y' || answer == 'Y');

    cout << "Goodbye!\n";

    return 0;
}
