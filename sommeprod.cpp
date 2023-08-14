
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> const nombres { 1, 2, 4, 5, 10 };

    // On choisit 0 comme élément de départ pour calculer la somme, car 0 est l'élément neutre de l'addition.
    auto somme { std::accumulate(std::begin(nombres), std::end(nombres), 0) };
    std::cout << somme << std::endl;

    // On choisit 1 comme élément de départ pour calculer le produit, car 1 est l'élément neutre de la multiplication.
    auto produit { std::accumulate(std::cbegin(nombres), std::cend(nombres), 1, std::multiplies<int> {}) };
    std::cout << produit << std::endl;

    return 0;
}