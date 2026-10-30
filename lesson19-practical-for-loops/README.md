# Lesson 19: Practical for loops: a multiplication table and an average

Part of the **C++ for Beginners** video series.

## What you'll learn

- Think first: what stays the same, what changes, start, end, step and what repeats
- A multiplication table: the loop variable takes part in the calculation (`number * multiplier`)
- A syntax error on purpose: a missing semicolon, reported on the next line
- A while loop to validate the count, then a for loop with a variable limit (`scoreNumber <= scoreCount`)
- An accumulator: a running total before, inside and after the loop
- A logical error on purpose: `<` instead of `<=` skips the last score

## Programs

- `multiplication.cpp`
- `average_scores.cpp`

## Three versions

- [`starter/`](starter/): the programs with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished programs, exactly as they are at the end of the video. Compare them with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ multiplication.cpp -o multiplication
./multiplication
```

Do the same for `average_scores.cpp`.

## Your turn

Add a validation loop inside the score-reading body: if a score is below 0 or above 100, ask for it again before adding it to the total. You already know the pieces: a `for` loop for the number of scores, and a `while` loop to validate each one.

Try it yourself first. Then compare with the answer: [`solution/average_scores.cpp`](solution/average_scores.cpp).
