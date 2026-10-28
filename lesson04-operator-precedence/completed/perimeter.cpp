#include <iostream>

int main()
{
    double width;
    double height;

    std::cout << "Enter the width: ";
    std::cin >> width;

    std::cout << "Enter the height: ";
    std::cin >> height;

    double perimeter = (width + height) * 2;
    std::cout << "The perimeter is " << perimeter << " units.\n";
    return 0;
}
