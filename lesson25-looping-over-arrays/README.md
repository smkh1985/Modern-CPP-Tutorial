# Lesson 25: Looping over arrays: sum, average and above average

Part of the **C++ for Beginners** video series.

## What you'll learn

- A `for` loop over an array, from index 0 while `i < count`, and `const int count` as its size
- A table lined up with the tab character `\t`
- Adding up the elements with `+=`, then the average
- A logical error on purpose: an `int` sum drops the decimals
- Two arrays with the same index (`names[i]` and `scores[i]`), and who is above average
- A syntax error on purpose: a comma instead of a semicolon in the `for` header

## Programs

- `scores.cpp`

## Three versions

- [`starter/`](starter/): the program with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished program, exactly as it is at the end of the video. Compare it with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ scores.cpp -o scores
./scores
```

## Your turn

Find the highest score, and print the name of the student who got it. Hint: start with the first score, and compare each of the others with it in a loop.

Try it yourself first. Then compare with the answer: [`solution/scores.cpp`](solution/scores.cpp).
