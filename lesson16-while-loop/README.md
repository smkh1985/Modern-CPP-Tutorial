# Lesson 16: The while loop

Part of the **C++ for Beginners** video series.

## What you'll learn

- Why copying the same line again and again doesn't scale
- The while loop: `while (condition) { ... }`
- `while (false)` and `while (true)`, infinite loops, and stopping a program with Ctrl+C
- The loop variable, and why it must always be updated inside the loop
- `cnt = cnt - 1;`, `cnt -= 1;`, `--cnt;` and `cnt--;`
- Tracing a loop in the VS Code debugger: breakpoints, watches and stepping

## Programs

- `hello_loop.cpp`

## Two versions

- [`starter/`](starter/): the program with a **TODO list**. Follow the TODOs while you watch the video, and write the code yourself.
- [`completed/`](completed/): the finished program, exactly as it is at the end of the video. Compare it with yours when you're done.

## Compile and run

From inside `starter/` or `completed/`:

```bash
g++ hello_loop.cpp -o hello_loop
./hello_loop
```

## Debug it in VS Code

Each folder has a `.vscode/launch.json` for the debugger. You need the C/C++ extension (ms-vscode.cpptools) and gdb.

1. Open `starter/` (or `completed/`) as a folder in VS Code.
2. Compile with debugging information: `g++ -g hello_loop.cpp -o hello_loop`
3. Click a line inside the loop and press **F9** to set a breakpoint.
4. **Run > Start Debugging** (or F5). Add watches with the **+** in the Watch section, for example `cnt` and `cnt > 0`.
5. Step with **F10**, continue with **F5**, and stop with **Shift+F5**.
