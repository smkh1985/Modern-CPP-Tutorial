# Lesson 21: The do...while loop: run first, then check

Part of the **C++ for Beginners** video series.

## What you'll learn

- `while` checks first, `do...while` runs the body first, so its body always runs at least once
- A second look at `rating.cpp`: removing the repeated input code with `do...while`
- Think first: a repeatable calculation with a `char` answer
- A syntax error on purpose: the missing semicolon after `while (...)`
- A logical error on purpose: `answer == 'n'` ends the loop on y. A loop repeats WHILE its condition is true

## Programs

- `repeat_calculation.cpp`

## Three versions

- [`starter/`](starter/): the program with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished program, exactly as it is at the end of the video. Compare it with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ repeat_calculation.cpp -o repeat_calculation
./repeat_calculation
```

## Your turn

Change the condition so it accepts both a lowercase `y` and an uppercase `Y`. Then put the calculator from the switch lesson (lesson 14) inside a `do...while` loop, so the user can do several calculations without restarting the program.

Try it yourself first. Then compare with the answer: [`solution/repeat_calculation.cpp`](solution/repeat_calculation.cpp), [`solution/calculator.cpp`](solution/calculator.cpp).
