// Lesson 20: Is it prime? Leaving a loop early with break
// Compile and run:  g++ prime.cpp -o prime && ./prime

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    // Think first: what changes (the divisor)? Start (2)? End (while divisor < number)?
    //              Step (+1)? What repeats (check the remainder)? Before the loop (assume prime)?

    // TODO 1: Read and validate the number: ask "Enter a whole number greater than 1: ",
    //         and while number < 2, ask again.

    // TODO 2: Try possible divisors using while: bool isPrime = true; int divisor = 2;
    //         while (divisor < number), print "Checking divisor: " and the divisor,
    //         then divisor++ at the end of the body.

    // TODO 3: Record whether a divisor is found: if (number % divisor == 0), isPrime = false;
    //         Careful: two equals signs to compare!

    // TODO 4: Observe unnecessary checks: run it with 12. Why keep checking after 2?

    // TODO 5: Stop early using break, right after isPrime = false;

    // TODO 6: After the loop, print "N is prime." or "N is not prime."
    //         Test prime and non-prime numbers: 12, 7 and 2.

    return 0;
}
