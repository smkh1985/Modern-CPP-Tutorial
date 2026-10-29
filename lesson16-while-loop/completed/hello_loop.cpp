#include <iostream>

using std::cout;

int main()
{
    int cnt = 5;

    while (cnt > 0)
    {
        cout << "Hello\n";
        cnt = cnt - 1;
        // cnt -= 1;
        // --cnt;
        // cnt--;
    }

    cout << "Bye!\n";

    return 0;
}
