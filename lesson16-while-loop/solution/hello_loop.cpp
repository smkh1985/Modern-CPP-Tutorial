#include <iostream>

using std::cout;
using std::cin;

int main()
{
    // Part 1: change 5 to 100 in "int cnt = 5;" and Hello is printed one hundred times.
    // Part 2: let the user choose.
    int cnt;

    cout << "How many times? ";
    cin >> cnt;

    while (cnt > 0)
    {
        cout << "Hello\n";
        cnt = cnt - 1;
    }

    cout << "Bye!\n";

    return 0;
}
