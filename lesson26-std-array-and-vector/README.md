# Lesson 26: Modern arrays: std::array and std::vector

Part of the **C++ for Beginners** video series.

## What you'll learn

- C-style arrays, and why they don't know their own size
- `std::array`: a fixed size that it knows, with `.size()`
- `std::vector`: starts empty and grows with `push_back`
- A syntax error on purpose: `pushback` without the underscore
- A logical error on purpose: a loop that starts at index 1 skips the first element

## Programs

- `numbers.cpp`
- `prices.cpp`

## Three versions

- [`starter/`](starter/): the programs with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished programs, exactly as they are at the end of the video. Compare them with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ numbers.cpp -o numbers
./numbers
```

Do the same for `prices.cpp`.

## Your turn

After the total, print every price on its own line, and the average price. Then rewrite your scores program from the last lesson with a `std::array`.

Try it yourself first. Then compare with the answer: [`solution/prices.cpp`](solution/prices.cpp), [`solution/scores.cpp`](solution/scores.cpp).
