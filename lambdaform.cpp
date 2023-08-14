#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    auto lambda_avec_accolades { [](int nombre) -> void { std::cout << "Nombre reçu : " << nombre << std::endl; } };
    auto lambda_avec_egal = [](int nombre) -> void { std::cout << "Nombre reçu : " << nombre << std::endl; };

    // S'utilise comme une fonction classique, de façon totalement transparente.
    lambda_avec_accolades(5);

    std::vector<int> const nombres { 1, 2, 3, 8, 94, 548 };
    // Ou bien dans un algorithme, aucun problème.
    std::for_each(std::cbegin(nombres), std::cend(nombres), lambda_avec_egal);

    return 0;
}