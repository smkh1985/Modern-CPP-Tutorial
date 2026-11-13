#include <iostream>
#include <array>

using std::cout;
using std::array;

int main()
{
    array<int, 5> numbers = {2, 4, 10, 34, 42};

    cout << "Count: " << numbers.size() << '\n';

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << ' ';
    }
    cout << '\n';

    return 0;
}
