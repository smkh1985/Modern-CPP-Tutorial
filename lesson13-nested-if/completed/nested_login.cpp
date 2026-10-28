#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    const string correctUsername = "alex";
    const string correctPassword = "learn123";
    bool isActive = true;

    string username;
    string password;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword)
    {
        if (isActive)
        {
            cout << "You logged in successfully.\n";
        }
        else
        {
            cout << "Your account is inactive.\n";
        }
    }
    else
    {
        cout << "The username or password is incorrect.\n";
    }

    return 0;
}
