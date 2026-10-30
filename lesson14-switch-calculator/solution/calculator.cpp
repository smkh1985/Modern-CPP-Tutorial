#include <iostream>

using std::cout;
using std::cin;

int main()
{
    double number1;
    double number2;
    char op;

    // Read the two numbers and the operator.
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter an operator (+, -, *, /, a for average): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> number2;

    // Select the calculation using the operator.
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

        case 'a':
            cout << "Average: " << (number1 + number2) / 2 << '\n';
            break;

        default:
            cout << "Invalid operator.\n";
            break;
    }

    return 0;
}
