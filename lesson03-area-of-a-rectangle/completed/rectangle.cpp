#include <iostream>

int main()
{
    double width;
    double height;

    std::cout << "Enter the width: ";
    std::cin >> width;

    std::cout << "Enter the height: ";
    std::cin >> height;

    double area = width * height;
    std::cout << "The area is " << area << " square units.\n";
    return 0;
}
