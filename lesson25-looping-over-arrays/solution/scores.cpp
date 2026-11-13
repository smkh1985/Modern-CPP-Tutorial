#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    const int count = 5;
    double scores[count] = {17.5, 12.5, 19.0, 14.5, 16.0};
    string names[count] = {"Alex", "Sarah", "Sam", "Mina", "Omar"};

    // Start with the first student, then compare each of the others with the best so far.
    int best = 0;
    for (int i = 1; i < count; i++)
    {
        if (scores[i] > scores[best])
        {
            best = i;
        }
    }

    cout << "Highest score: " << scores[best] << '\n';
    cout << "Student: " << names[best] << '\n';

    return 0;
}
