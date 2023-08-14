#include <iostream>
#include <vector>

int main()
{
    std::vector<int> valeurs {};
    std::cout << "Taille actuelle de mon tableau : " << std::size(valeurs) << " éléments.\n";

    // On ajoute dix fois la valeur 42.
    valeurs.assign(10, 42);
    std::cout << "Taille actuelle de mon tableau : " << std::size(valeurs) << " éléments.\n";

    for (auto const valeur : valeurs)
    {
        std::cout << valeur << std::endl;
    }

    std::cout << '\n';

    // Finalement on réduit en asignant cinq fois la valeur 3.
    valeurs.assign(5, 3);
    std::cout << "Taille actuelle de mon tableau : " << std::size(valeurs) << " éléments.\n";

    for (auto const valeur : valeurs)
    {
        std::cout << valeur << std::endl;
    }

    std::cout << '\n';

    // Mais on peut très bien augmenter.
    valeurs.assign(12, 78);
    std::cout << "Taille actuelle de mon tableau : " << std::size(valeurs) << " éléments.\n";

    for (auto const valeur : valeurs)
    {
        std::cout << valeur << std::endl;
    }

    return 0;
}