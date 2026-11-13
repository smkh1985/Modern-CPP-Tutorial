# Lesson 23: Searching and replacing text: find and replace

Part of the **C++ for Beginners** video series.

## What you'll learn

- `find` returns the position where the first match starts
- A logical error on purpose: `if (position)`, and what `string::npos` means
- `find` is case-sensitive
- `replace(start, count, newText)`: changing part of a string
- A syntax error on purpose: `npos` without `string::`
- Shorter and longer replacements: the string adjusts its length

## Programs

- `search_message.cpp`
- `replace_name.cpp`

## Three versions

- [`starter/`](starter/): the programs with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished programs, exactly as they are at the end of the video. Compare them with yours when you're done.
- [`solution/`](solution/): the answer to the **Your turn** challenge at the end of the video. Try it yourself first!

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ search_message.cpp -o search_message
./search_message
```

Do the same for `replace_name.cpp`.

## Your turn

Change the greeting to `Good morning, Alex!` and test the program again. Because we search for the name instead of hard-coding its position, the replacement should still work.

Try it yourself first. Then compare with the answer: [`solution/replace_name.cpp`](solution/replace_name.cpp).
