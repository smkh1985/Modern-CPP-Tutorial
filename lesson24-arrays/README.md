# Lesson 24: Introducing arrays: one name, many values

Part of the **C++ for Beginners** video series.

## What you'll learn

- Declaring an array: the element type, the name and the size in square brackets
- Initializer lists in curly braces, and letting the compiler count the elements
- Contiguous storage: the elements sit side by side in memory
- A syntax error on purpose: values in square brackets. Curly braces to initialize, square brackets to index
- A logical error on purpose: `guests[1]` is the second guest. Indices start at 0
- Changing one element with an assignment

## Programs

- `arrays.cpp`

## Three versions

- [`starter/`](starter/): the program with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished program, exactly as it is at the end of the video. Compare it with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ arrays.cpp -o arrays
./arrays
```

## Your turn

Change the second guest to a different name. Then display the first, second and last guests. Check your indices carefully!

Try it yourself first. Then compare with the answer: [`solution/arrays.cpp`](solution/arrays.cpp).
