// Lesson 17: Input validation, keep asking for a rating until it's valid
// Compile and run:  g++ rating.cpp -o rating && ./rating

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    // TODO 1: Create an int called rating. Ask "Rate our service from 1 to 5: ",
    //         and read the answer with cin.

    // TODO 2: A rating is invalid when it's less than 1 OR greater than 5:
    //         rating < 1 || rating > 5     (why not &&? A number can't be both!)

    // TODO 3: While the rating is invalid: print
    //         "Invalid rating. Enter a number from 1 to 5: " and read a new rating.
    //         (No counter here: the user's new answer updates the loop variable.)

    // TODO 4: After the loop, print "Thank you! Your rating is " and the rating.

    // TODO 5: Test it with 10, 0 and 4. Then run it again, and enter 5 straight away.
    //         (Enter whole numbers: letters need extra input checks.)

    return 0;
}
