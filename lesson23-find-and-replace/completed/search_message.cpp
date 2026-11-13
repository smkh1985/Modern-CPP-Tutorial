#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string message;

    cout << "Enter your message: ";
    std::getline(cin, message);

    string::size_type position = message.find("delivery");

    if (position != string::npos)
    {
        cout << "Delivery was mentioned.\n";
        cout << "First match starts at position "
             << position << ".\n";
    }
    else
    {
        cout << "Delivery was not mentioned.\n";
    }

    return 0;
}
