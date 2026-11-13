# Lesson 20: break and continue: leaving a loop early and skipping one round

Part of the **C++ for Beginners** video series.

## What you'll learn

- Think first: a loop that tries every possible divisor, and a `bool` flag (`isPrime`)
- A syntax error on purpose: `=` instead of `==` in a condition ("lvalue required as left operand of assignment")
- `break`: leave the loop as soon as the answer is known, even while the condition is still true
- `continue`: skip the rest of one round (an absent student) and go on with the next
- A logical error on purpose: the same `=` typo, which this time compiles and skips every student
- Avoiding a division by zero, and where `continue` goes in a `for` loop and in a `while` loop

## Programs

- `prime.cpp`
- `scores.cpp`

## Three versions

- [`starter/`](starter/): the programs with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished programs, exactly as they are at the end of the video. Compare them with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ prime.cpp -o prime
./prime
```

Do the same for `scores.cpp`.

## Your turn

Add a second counter that records how many students were absent. Update it before `continue`, then print the number of absent students after the loop.

Try it yourself first. Then compare with the answer: [`solution/scores.cpp`](solution/scores.cpp).
