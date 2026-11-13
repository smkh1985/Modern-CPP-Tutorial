// Lesson 25: Looping over arrays, sum, average and above average
// Compile and run:  g++ scores.cpp -o scores && ./scores

#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    // Think first: the index i starts at 0, goes while i < count, and steps by 1.
    //              Each round uses scores[i].

    // TODO 1: Store the scores in an array:  const int count = 5;
    //         double scores[count] = {17.5, 12.5, 19.0, 14.5, 16.0};

    // TODO 2: Print them in a table: a header "Student\tScore", then a for loop that prints
    //         i + 1, a tab, and scores[i].

    // TODO 3: Add up the scores: a sum that starts at 0 (int or double?), and a loop with
    //         sum += scores[i];

    // TODO 4: Calculate the average (sum / count), and display the sum and the average.
    //         It should be Sum: 79.5 and Average: 15.9.

    // TODO 5: Add the student names:
    //         string names[count] = {"Alex", "Sarah", "Sam", "Mina", "Omar"};

    // TODO 6: List who scored above average: a loop with  if (scores[i] > average)
    //         that prints names[i], a tab, and scores[i].

    return 0;
}
