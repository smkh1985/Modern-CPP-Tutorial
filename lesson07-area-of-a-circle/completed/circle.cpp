#include <iostream>
#include <cmath>
#include <numbers>

int main()
{
    double radius;

    std::cout << "Enter the radius: ";
    std::cin >> radius;

    double area = std::numbers::pi * std::pow(radius, 2);
    std::cout << "The area is " << area << "\n";
    return 0;
}
