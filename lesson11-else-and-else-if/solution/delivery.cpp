#include <iostream>

int main()
{
    double weight;

    std::cout << "Enter the parcel weight in kg: ";
    std::cin >> weight;

    // Predictions: exactly 1 kg costs $5 (1 <= 1), and exactly 5 kg costs $10 (5 <= 5).
    if (weight <= 1)
    {
        std::cout << "Delivery costs $5.\n";
    }
    else if (weight <= 5)
    {
        std::cout << "Delivery costs $10.\n";
    }
    else if (weight <= 10)  // the new option goes after "up to 5 kg", before the final else
    {
        std::cout << "Delivery costs $15.\n";
    }
    else
    {
        std::cout << "Delivery costs $20.\n";
    }

    return 0;
}
