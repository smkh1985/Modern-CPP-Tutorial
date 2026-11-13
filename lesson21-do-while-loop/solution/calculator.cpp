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
        char op;

        cout << "Enter the first number: ";
        cin >> number1;

        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter the second number: ";
        cin >> number2;

        switch (op)
        {
            case '+':
                cout << "Result: " << number1 + number2 << '\n';
                break;

            case '-':
                cout << "Result: " << number1 - number2 << '\n';
                break;

            case '*':
                cout << "Result: " << number1 * number2 << '\n';
                break;

            case '/':
                if (number2 == 0)
                {
                    cout << "Cannot divide by zero.\n";
                }
                else
                {
                    cout << "Result: " << number1 / number2 << '\n';
                }
                break;

            default:
                cout << "Invalid operator.\n";
                break;
        }

        cout << "Calculate again? (y/n): ";
        cin >> answer;

    } while (answer == 'y' || answer == 'Y');

    cout << "Goodbye!\n";

    return 0;
}
