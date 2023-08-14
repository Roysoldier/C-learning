#include <algorithm>
#include <array>
#include <iostream>

int main()
{
    std::array<double, 4u> tableau { 1, 3.1415, 2.1878, 1.5 };

    // Tri dans l'ordre décroissant.
    std::sort(std::begin(tableau), std::end(tableau), [](double a, double b) -> bool
    {
        return a > b;
    });

    for (auto nombre : tableau)
    {
        std::cout << nombre << std::endl;
    }

    return 0;
}