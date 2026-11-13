#include <iostream>
#include <string>
#include <array>

using std::cout;
using std::string;
using std::array;

int main()
{
    // No separate count: each array knows its own size.
    array<double, 5> scores = {17.5, 12.5, 19.0, 14.5, 16.0};
    array<string, 5> names = {"Alex", "Sarah", "Sam", "Mina", "Omar"};

    cout << "Student\tScore\n";
    for (int i = 0; i < scores.size(); i++)
    {
        cout << i + 1 << '\t' << scores[i] << '\n';
    }

    double sum = 0;
    for (int i = 0; i < scores.size(); i++)
    {
        sum += scores[i];
    }
    double average = sum / scores.size();

    cout << "Sum: " << sum << '\n';
    cout << "Average: " << average << '\n';

    cout << "Above average:\n";
    for (int i = 0; i < scores.size(); i++)
    {
        if (scores[i] > average)
        {
            cout << names[i] << '\t' << scores[i] << '\n';
        }
    }

    return 0;
}
