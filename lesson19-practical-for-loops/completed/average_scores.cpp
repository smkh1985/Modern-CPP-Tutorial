#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int scoreCount;

    cout << "How many scores? ";
    cin >> scoreCount;

    while (scoreCount <= 0)
    {
        cout << "Enter a count greater than zero: ";
        cin >> scoreCount;
    }

    double total = 0.0;

    for (int scoreNumber = 1; scoreNumber <= scoreCount; scoreNumber++)
    {
        double score;

        cout << "Enter score " << scoreNumber << ": ";
        cin >> score;

        total = total + score;
    }

    double average = total / scoreCount;

    cout << "Average: " << average << '\n';

    return 0;
}
