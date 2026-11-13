#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    int numbers[5] = {2, 4, 10, 34, 42};
    string guests[] = {"Alex", "Sarah", "Sam", "Mina", "Omar"};

    cout << "First guest: " << guests[0] << '\n';
    cout << "Last guest: " << guests[4] << '\n';
    cout << "First number: " << numbers[0] << '\n';

    guests[4] = "Daniel";
    cout << "Updated last guest: " << guests[4] << '\n';

    return 0;
}
