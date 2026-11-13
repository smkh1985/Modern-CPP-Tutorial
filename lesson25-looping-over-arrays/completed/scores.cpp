#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    const int count = 5;
    double scores[count] = {17.5, 12.5, 19.0, 14.5, 16.0};

    cout << "Student\tScore\n";
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << '\t' << scores[i] << '\n';
    }

    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += scores[i];
    }
    double average = sum / count;

    cout << "Sum: " << sum << '\n';
    cout << "Average: " << average << '\n';

    string names[count] = {"Alex", "Sarah", "Sam", "Mina", "Omar"};

    cout << "Above average:\n";
    for (int i = 0; i < count; i++)
    {
        if (scores[i] > average)
        {
            cout << names[i] << '\t' << scores[i] << '\n';
        }
    }

    return 0;
}
