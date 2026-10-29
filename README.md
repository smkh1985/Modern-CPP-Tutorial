# Modern C++ Tutorial

The code for the **C++ for Beginners** video series. Every lesson has its own folder with two versions of each program:

- **`starter/`**: the program with a **TODO list**. Code along with the video by filling in the TODOs.
- **`completed/`**: the finished program, as it is at the end of the video.

| Lesson | Topic | Folder | Programs |
|---|---|---|---|
| 1 | Your first C++ program: Hello, World! | [`lesson01-hello-world/`](lesson01-hello-world/) | `hello.cpp` |
| 2 | Reading input: greeting the user | [`lesson02-reading-input/`](lesson02-reading-input/) | `greet.cpp` |
| 3 | Working with numbers: the area of a rectangle | [`lesson03-area-of-a-rectangle/`](lesson03-area-of-a-rectangle/) | `rectangle.cpp` |
| 4 | The perimeter of a rectangle: operator precedence | [`lesson04-operator-precedence/`](lesson04-operator-precedence/) | `perimeter.cpp` |
| 5 | The average of two numbers: integer division, double and casts | [`lesson05-integer-division/`](lesson05-integer-division/) | `average.cpp` |
| 6 | Seconds to minutes: integer division and the remainder operator | [`lesson06-remainder-operator/`](lesson06-remainder-operator/) | `time_converter.cpp` |
| 7 | The area of a circle: const, std::pow and std::numbers::pi | [`lesson07-area-of-a-circle/`](lesson07-area-of-a-circle/) | `circle.cpp` |
| 8 | True or false: the bool type and comparisons | [`lesson08-bool-and-comparisons/`](lesson08-bool-and-comparisons/) | `check_age.cpp` |
| 9 | Making decisions: the if statement | [`lesson09-if-statement/`](lesson09-if-statement/) | `adult_check.cpp` |
| 10 | Is the number even? == and != with the remainder operator | [`lesson10-even-or-odd/`](lesson10-even-or-odd/) | `check_number.cpp` |
| 11 | Choosing between actions: else and else if | [`lesson11-else-and-else-if/`](lesson11-else-and-else-if/) | `show_access.cpp`, `delivery.cpp` |
| 12 | Combining conditions: the logical operators AND, OR and NOT | [`lesson12-logical-operators/`](lesson12-logical-operators/) | `admission.cpp`, `login.cpp`, `account.cpp` |
| 13 | Nested if and using-declarations: login with account status | [`lesson13-nested-if/`](lesson13-nested-if/) | `nested_login.cpp` |
| 14 | A simple calculator: char, switch and comments | [`lesson14-switch-calculator/`](lesson14-switch-calculator/) | `calculator.cpp` |
| 15 | The conditional operator ? : | [`lesson15-conditional-operator/`](lesson15-conditional-operator/) | `ticket.cpp`, `delivery_fee.cpp`, `exam_result.cpp` |
| 16 | The while loop: loop variables and the VS Code debugger | [`lesson16-while-loop/`](lesson16-while-loop/) | `hello_loop.cpp` |

## How to use it

1. Open the folder for the lesson you're watching, for example [`lesson03-area-of-a-rectangle/`](lesson03-area-of-a-rectangle/).
2. Copy the file from `starter/`, follow its TODOs, then compile and run it:
   ```bash
   g++ rectangle.cpp -o rectangle
   ./rectangle
   ```
3. Stuck, or finished? Compare with the file in `completed/`.

You'll need a C++ compiler such as g++ (lesson 0 of the series shows how to install one). Lesson 7 uses a C++20 feature, so compile it with `-std=c++20`.
