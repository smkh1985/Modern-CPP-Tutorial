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
    int exclamations = 0;

    for (string::size_type i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            spaces++;
        }

        if (sentence[i] == '!')
        {
            exclamations++;
        }
    }

    cout << "Number of spaces: " << spaces << '\n';
    cout << "Number of exclamation marks: " << exclamations << '\n';

    return 0;
}
