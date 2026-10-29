# Lesson 17: Practical while loops: input validation, sentinels and accumulators

Part of the **C++ for Beginners** video series.

## What you'll learn

- Input validation: asking again while the answer is invalid (`rating < 1 || rating > 5`)
- Why the condition uses OR and not AND
- A loop without a counter: the user's input updates the loop variable
- A sentinel value: a special value (0) that means stop
- An accumulator: a variable that collects a running total (`total = total + price;`)
- Why the next value must be read inside the loop

## Programs

- `rating.cpp`
- `shopping.cpp`

## Two versions

- [`starter/`](starter/): the programs with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished programs, exactly as they are at the end of the video. Compare them with yours when you're done.

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ rating.cpp -o rating
./rating
```

Do the same for `shopping.cpp`.

## Your turn

Extend `shopping.cpp` to count the items too: start an `int` counter at zero, add one each time a price is added, and print both the number of items and the total.
