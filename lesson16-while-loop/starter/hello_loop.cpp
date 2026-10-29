// Lesson 16: The while loop, printing Hello five times
// Compile and run:  g++ hello_loop.cpp -o hello_loop && ./hello_loop
// Debug it:         g++ -g hello_loop.cpp -o hello_loop, then Run > Start Debugging in VS Code

#include <iostream>

using std::cout;

int main()
{
    // TODO 1: Write an empty while loop:  while () { }
    //         After the loop, print "Bye!".

    // TODO 2: Put false in the condition and cout << "Hello\n"; in the block. Run it:
    //         only Bye! appears. Then change false to true and run it again:
    //         an infinite loop! Stop it with Ctrl+C.

    // TODO 3: Before the loop, create the loop variable: int cnt = 5;
    //         (how many Hellos are still left to print). Change the condition to cnt > 0.

    // TODO 4: Run it. Still infinite? Trace it with the debugger: a breakpoint (F9) on the
    //         cout line, Run > Start Debugging, watches on cnt and cnt > 0, then step with F10.

    // TODO 5: Always update the loop variable inside the loop! After printing Hello:
    //         cnt = cnt - 1;   (or cnt -= 1;  --cnt;  cnt--;)
    //         Run it: Hello five times, then Bye!

    return 0;
}
