# Lesson 22: Working with strings: join, length and characters

Part of the **C++ for Beginners** video series.

## What you'll learn

- Joining strings with `+` (concatenation), and reading names with spaces using `getline`
- A logical error on purpose: a missing space, because `+` adds exactly the text you give it
- `length()` and `size()`, and copying a string
- Indexes start at 0: `sentence[i]`, and the last index is the length minus 1
- Traversing a string with a `for` loop and `string::size_type`
- A syntax error on purpose: comparing a `char` with `" "` instead of `' '`

## Programs

- `name_badge.cpp`
- `count_spaces.cpp`

## Three versions

- [`starter/`](starter/): the programs with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished programs, exactly as they are at the end of the video. Compare them with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ name_badge.cpp -o name_badge
./name_badge
```

Do the same for `count_spaces.cpp`.

## Your turn

Change the second program so it counts exclamation marks instead of spaces. Then count both, using a separate counter for each character.

Try it yourself first. Then compare with the answer: [`solution/count_spaces.cpp`](solution/count_spaces.cpp).
