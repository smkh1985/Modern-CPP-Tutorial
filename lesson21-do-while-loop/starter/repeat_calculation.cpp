// Lesson 21: A repeatable calculation with a do...while loop
// Compile and run:  g++ repeat_calculation.cpp -o repeat_calculation && ./repeat_calculation

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    // Think first: the body must run at least once (we have no answer yet), so the check
    // comes at the end: do { ... } while (condition);

    // TODO 1: Before the loop, declare the answer: char answer;
    //         (the condition comes after the closing brace, so it must live outside the body)

    // TODO 2: Start the loop with do and an opening curly brace. Inside, read two numbers
    //         (double number1, number2) with "Enter the first number: " and "Enter the second number: ".

    // TODO 3: Display their sum:  cout << "Sum: " << number1 + number2 << '\n';

    // TODO 4: Ask whether to repeat: "Calculate again? (y/n): " and read answer.

    // TODO 5: Repeat while the answer is y:  } while (answer == 'y');
    //         Don't forget the semicolon! The loop repeats WHILE the condition is true.

    // TODO 6: After the loop, print "Goodbye!". Test both choices, y and n.

    return 0;
}
