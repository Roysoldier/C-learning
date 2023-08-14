
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> tableau_de_int { 12, 24 };

    std::cout << "Taille avant l'ajout : " << std::size(tableau_de_int) << std::endl;

    tableau_de_int.push_back(36);
    tableau_de_int.push_back(48);
    tableau_de_int.push_back(100);

    std::cout << "Taille après l'ajout : " << std::size(tableau_de_int) << std::endl;

    // Je retire le dernier élément.
    tableau_de_int.pop_back();
    std::cout << "Taille après avoir retiré le dernier élément : " << std::size(tableau_de_int) << std::endl;

    // Finalement j'en ai marre, je vide le tableau.
    tableau_de_int.clear();
    std::cout << "Taille après avoir vidé le tableau : " << std::size(tableau_de_int) << std::endl;

    return 0;
}