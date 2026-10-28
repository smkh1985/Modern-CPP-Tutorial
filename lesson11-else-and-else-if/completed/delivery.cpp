#include <iostream>

int main()
{
    double weight;

    std::cout << "Enter the parcel weight in kg: ";
    std::cin >> weight;

    if (weight <= 1)
    {
        std::cout << "Delivery costs $5.\n";
    }
    else if (weight <= 5)
    {
        std::cout << "Delivery costs $10.\n";
    }
    else
    {
        std::cout << "Delivery costs $20.\n";
    }

    return 0;
}
