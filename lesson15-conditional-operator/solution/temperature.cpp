#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    double temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    string message = (temperature < 0) ? "Freezing" : "Not freezing";
    cout << message << '\n';

    return 0;
}
