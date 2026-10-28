#include <iostream>
#include <string>

int main()
{
    std::string username;
    std::string password;

    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;

    if (username == "alex" && password == "learn123")
    {
        std::cout << "You logged in successfully.\n";
    }
    else
    {
        std::cout << "The username or password is incorrect.\n";
    }

    return 0;
}
