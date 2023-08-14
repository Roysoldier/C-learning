
#include <array>
#include <iostream>

int main()
{
    // Tableau contenant cinq entiers explicitement précisés.
    std::array<int, 5> const tableau_de_5_entiers { 1, 2, 3, 4, 5 };
    for (auto const element : tableau_de_5_entiers)
    {
        std::cout << element << std::endl;
    }

    // Tableau contenant deux décimaux définis puis cinq zéros.
    std::array<double, 7> const tableau_de_7_decimaux { 3.14159, 2.1878 };
    for (auto const element : tableau_de_7_decimaux)
    {
        std::cout << element << std::endl;
    }

    // Tableau qui a trop d'éléments et ne compilera pas.
    //std::array<int, 2> const tableau_qui_ne_compilera_pas { 1, 2, 3, 4 };

    // Il est tout à fait possible de copier un tableau.
    auto copie { tableau_de_5_entiers };
    for (auto const element : copie)
    {
        std::cout << element << std::endl;
    }

    return 0;
}