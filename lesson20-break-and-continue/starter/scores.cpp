// Lesson 20: An average that skips absent students, with continue
// Compile and run:  g++ scores.cpp -o scores && ./scores

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    // Think first: a for loop from student 1 to studentCount. Each round: read a score.
    //              If the student was absent (-1), skip the rest of the round.

    // TODO 1: Read the number of students (int studentCount;), and while it's zero or
    //         negative, ask "Enter a count greater than zero: " again.

    // TODO 2: Initialize the total and the graded count: double total = 0.0; int gradedCount = 0;

    // TODO 3: Read each student's score:
    //         for (int student = 1; student <= studentCount; student++)
    //         ask "Enter score for student N (-1 for absent): " and read a double.

        // TODO 4: Skip absent students using continue: if (score == -1), print
        //         "Absent student skipped." and continue. (Two equals signs!)

        // TODO 5: Update the total and the graded count: total = total + score; gradedCount++;

    // TODO 6: Calculate the average safely: only if gradedCount > 0, otherwise print
    //         "No scores were recorded."

    // TODO 7: Test absences and recorded scores: 3 students (80, -1, 60) give 70;
    //         2 students (-1, -1) record no scores.

    return 0;
}
