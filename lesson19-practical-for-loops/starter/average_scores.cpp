// Lesson 19: The average of several exam scores
// Compile and run:  g++ average_scores.cpp -o average_scores && ./average_scores

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    // Think first: the loop starts at score number 1, ends at the count the user enters
    //              (a variable!), and steps by 1. Each round: read a score, add it to the total.

    // TODO 1: Read the score count (int scoreCount;), and while it's zero or negative,
    //         ask "Enter a count greater than zero: " again.

    // TODO 2: Initialize the running total:  double total = 0.0;

    // TODO 3: Read exactly that many scores:
    //         for (int scoreNumber = 1; scoreNumber <= scoreCount; scoreNumber++)
    //         Careful: with < instead of <=, the last score is never read!

        // TODO 4: Inside the loop, ask "Enter score N: ", read it, and add it to the total.

    // TODO 5: After the loop, calculate the average (total / scoreCount) and display it.

    // TODO 6: Test it: 3 scores (80, 90, 70) give 80; 2 scores (80, 81) give 80.5;
    //         and a count of 0 asks again.

    return 0;
}
