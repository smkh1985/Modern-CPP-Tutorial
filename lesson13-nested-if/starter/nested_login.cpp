// Lesson 13: Nested if and using-declarations, login with account status
// Compile and run:  g++ nested_login.cpp -o nested_login && ./nested_login

#include <iostream>
#include <string>

// TODO 1: Bring in cout, cin and string with using-declarations:
//         using std::cout;  using std::cin;  using std::string;

int main()
{
    // TODO 2: Store the correct credentials as constants ("alex" and "learn123"),
    //         and a bool isActive, set to false.

    // TODO 3: Read the username and the password.

    // TODO 4: First stage: if both credentials are correct...

        // TODO 5: Second stage, inside it (a nested if): if isActive, print
        //         "You logged in successfully.", else print "Your account is inactive."

    // ...otherwise (the outer else), print "The username or password is incorrect."

    // TODO 6: Test all three outcomes: a wrong password, the right one while the account
    //         is inactive, and the right one with isActive set to true.

    return 0;
}
