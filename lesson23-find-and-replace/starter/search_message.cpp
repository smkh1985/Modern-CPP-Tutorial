// Lesson 23: Searching a message with find
// Compile and run:  g++ search_message.cpp -o search_message && ./search_message

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    // TODO 1: Read the message (string message;) with std::getline.

    // TODO 2: Search for a word:
    //         string::size_type position = message.find("delivery");

    // TODO 3: Check whether it was found:  if (position != string::npos)
    //         (not just "if (position)": npos counts as true, and 0 is a real match!)

    // TODO 4: Display its position: "Delivery was mentioned." and
    //         "First match starts at position N." Otherwise, "Delivery was not mentioned."

    // TODO 5: Test different messages: "My delivery is late", "Thank you for your help",
    //         and "Delivery is late" (is find case-sensitive?).

    return 0;
}
