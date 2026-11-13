// Lesson 23: Editing a greeting with find and replace
// Compile and run:  g++ replace_name.cpp -o replace_name && ./replace_name

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    // TODO 1: Define the original greeting:  string greeting = "Hello, Alex!";
    //         string oldName = "Alex";  and display "Original greeting: ".

    // TODO 2: Read a replacement name (string newName;) with std::getline.

    // TODO 3: Locate the old name:  string::size_type position = greeting.find(oldName);

    // TODO 4: Replace the selected text, only if it was found (position != string::npos):
    //         greeting.replace(position, oldName.length(), newName);
    //         Display "Updated greeting: ", otherwise "The original name was not found."

    // TODO 5: Test different replacement lengths: Sam (shorter) and Alexandra (longer).

    return 0;
}
