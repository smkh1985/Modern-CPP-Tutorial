#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    string guests[] = {"Alex", "Sarah", "Sam", "Mina", "Omar"};

    // The second guest is at index 1.
    guests[1] = "Lily";

    cout << "First guest: " << guests[0] << '\n';
    cout << "Second guest: " << guests[1] << '\n';
    cout << "Last guest: " << guests[4] << '\n';

    return 0;
}
