// Lesson 22: Counting the spaces in a sentence
// Compile and run:  g++ count_spaces.cpp -o count_spaces && ./count_spaces

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    // Think first: what changes (the index i)? Start (0)? End (while i < sentence.length())?
    //              Step (+1)? What repeats (look at sentence[i])? Before the loop (a counter at 0)?

    // TODO 1: Read a sentence (string sentence;) with std::getline, spaces included.

    // TODO 2: Initialize the space counter:  int spaces = 0;

    // TODO 3: Visit each character using for:
    //         for (string::size_type i = 0; i < sentence.length(); i++)
    //         and print "Position i: [character]".

        // TODO 4: Check for a space:  if (sentence[i] == ' ')  then spaces++;
        //         A single character goes in single quotes!

    // TODO 5: Display "Number of spaces: " and test it: "Hi Sam", two spaces, and an empty line.

    return 0;
}
