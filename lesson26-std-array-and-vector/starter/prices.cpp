// Lesson 26: std::vector, a list of prices that grows
// Compile and run:  g++ prices.cpp -o prices && ./prices

#include <iostream>
// TODO: include the vector header

using std::cout;
using std::cin;

int main()
{
    // Think first: we don't know how many prices there will be, so we can't pick a size.
    //              Start with an empty vector and add each price to its end.

    // TODO 1: Create an empty vector (add  using std::vector;  above main):
    //         vector<double> prices;  and a double, price.

    // TODO 2: Add each price with push_back: print "Enter each price. Enter 0 to finish.",
    //         read a price, and while (price != 0), prices.push_back(price); and read the next one.

    // TODO 3: Add up the prices: double total = 0.0; and a loop from i = 0 while
    //         i < prices.size(), with total += prices[i];  (Indices start at 0!)

    // TODO 4: Display "Items: " and prices.size(), and "Total: " and total.
    //         Test the program: 3.5, 2, 4.25 and 0 give 3 items and a total of 9.75.

    return 0;
}
