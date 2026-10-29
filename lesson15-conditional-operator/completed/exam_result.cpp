#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    int score;

    cout << "Enter your score from 0 to 100: ";
    cin >> score;

    string result = (score >= 50) ? "Pass" : "Fail";
    cout << "Result: " << result << '\n';
    cout << ((score >= 50) ? "Well done!\n" : "Try again!\n");

    return 0;
}
