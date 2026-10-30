# Lesson 15: The conditional operator ? :

Part of the **C++ for Beginners** video series.

## What you'll learn

- The conditional (ternary) operator: `condition ? valueIfTrue : valueIfFalse`
- Replacing a small if / else that only chooses a value
- Using a conditional expression directly inside `cout`, and why it needs parentheses there

## Programs

- `ticket.cpp`
- `delivery_fee.cpp`
- `exam_result.cpp`

## Three versions

- [`starter/`](starter/): the programs with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished programs, exactly as they are at the end of the video. Compare them with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ ticket.cpp -o ticket
./ticket
```

Do the same for `delivery_fee.cpp` and `exam_result.cpp`.

## Your turn

Read a temperature. If it's below zero, store "Freezing" in a `string` variable; otherwise store "Not freezing". Use the conditional operator, and print the message.

Try it yourself first. Then compare with the answer: [`solution/temperature.cpp`](solution/temperature.cpp).
