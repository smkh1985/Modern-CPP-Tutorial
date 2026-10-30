# Lesson 18: The for loop: initialization, condition and update

Part of the **C++ for Beginners** video series.

## What you'll learn

- Counting with a while loop, and its three control parts: initialization, condition and update
- The for loop: `for (initialization; condition; update)`, three parts and two semicolons
- The execution order: initialize once, check, run the body, update, check again
- Printing the loop variable, and combining it with text (`"Hello, user" << counter`)
- The shorter update `counter++`, and how the condition sets the boundary (`<= 5` or `< 5`)
- Counting down with `counter--`, and in steps with `counter += 2`

## Programs

- `for_loop.cpp`

## Three versions

- [`starter/`](starter/): the program with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished program, exactly as it is at the end of the video. Compare it with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ for_loop.cpp -o for_loop
./for_loop
```

## Your turn

Print a countdown from 10 to 1, and then "Liftoff!". Then print all the even numbers from 2 to 20. Think about the starting value, the condition and the update.

Try it yourself first. Then compare with the answer: [`solution/countdown.cpp`](solution/countdown.cpp), [`solution/even_numbers.cpp`](solution/even_numbers.cpp).
