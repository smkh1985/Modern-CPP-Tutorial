#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    // Only the greeting changes. find still locates Alex, now at position 14.
    string greeting = "Good morning, Alex!";
    string oldName = "Alex";

    cout << "Original greeting: " << greeting << '\n';

    string newName;

    cout << "Enter the replacement name: ";
    std::getline(cin, newName);

    string::size_type position = greeting.find(oldName);

    if (position != string::npos)
    {
        greeting.replace(position, oldName.length(), newName);

        cout << "Updated greeting: " << greeting << '\n';
    }
    else
    {
        cout << "The original name was not found.\n";
    }

    return 0;
}
