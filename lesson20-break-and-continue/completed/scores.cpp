#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int studentCount;

    cout << "How many students? ";
    cin >> studentCount;

    while (studentCount <= 0)
    {
        cout << "Enter a count greater than zero: ";
        cin >> studentCount;
    }

    double total = 0.0;
    int gradedCount = 0;

    for (int student = 1; student <= studentCount; student++)
    {
        double score;

        cout << "Enter score for student " << student
             << " (-1 for absent): ";
        cin >> score;

        if (score == -1)
        {
            cout << "Absent student skipped.\n";
            continue;
        }

        total = total + score;
        gradedCount++;
    }

    if (gradedCount > 0)
    {
        double average = total / gradedCount;
        cout << "Average: " << average << '\n';
    }
    else
    {
        cout << "No scores were recorded.\n";
    }

    return 0;
}
