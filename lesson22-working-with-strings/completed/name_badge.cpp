#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    std::getline(cin, firstName);

    cout << "Enter your last name: ";
    std::getline(cin, lastName);

    string fullName = firstName + " " + lastName;
    cout << "Full name: " << fullName << '\n';

    string badge = "Hello, " + fullName + "!";
    cout << badge << '\n';

    cout << "Name length: " << fullName.length() << '\n';

    string backupName = fullName;
    fullName = "Guest";

    cout << "Changed name: " << fullName << '\n';
    cout << "Saved name: " << backupName << '\n';

    return 0;
}
