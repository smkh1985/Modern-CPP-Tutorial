# Lesson 5: The average of two numbers: integer division, double and casts

Part of the **C++ for Beginners** video series.

## What you'll learn

- int: whole numbers only
- Integer division and how to avoid it
- static_cast<double>

## Programs

- `average.cpp`

## Three versions

- [`starter/`](starter/): the program with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished program, exactly as it is at the end of the video. Compare it with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ average.cpp -o average
./average
```

## Your turn

Keep `first` and `second` as `int`, remove the `static_cast`, and divide by `2.0` instead. Test it with 4 and 5 (you should get 4.5), then with 7 and 8.

Try it yourself first. Then compare with the answer: [`solution/average.cpp`](solution/average.cpp).
