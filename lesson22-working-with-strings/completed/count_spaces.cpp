#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string sentence;

    cout << "Enter a sentence: ";
    std::getline(cin, sentence);

    int spaces = 0;

    for (string::size_type i = 0; i < sentence.length(); i++)
    {
        cout << "Position " << i << ": [" << sentence[i] << "]\n";

        if (sentence[i] == ' ')
        {
            spaces++;
        }
    }

    cout << "Number of spaces: " << spaces << '\n';

    return 0;
}
