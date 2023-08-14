#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> tableau_de_int { 12, 24 };
    // On ajoute un élément...
    tableau_de_int.push_back(36);
    // ...mais on peut en ajouter encore d'autres.
    tableau_de_int.push_back(48);
    tableau_de_int.push_back(100);

    // On affiche pour vérifier.
    for (auto const valeur : tableau_de_int)
    {
        std::cout << valeur << std::endl;
    }

    std::vector<std::string> tableau_de_string { "Salut !", "Voici une phrase." };
    tableau_de_string.push_back("Mais je vais en ajouter une autre.");
    // Ceci ne compilera pas.
    //tableau_de_string.push_back(5);

    for (auto const chaine : tableau_de_string)
    {
        std::cout << chaine << std::endl;
    }

    return 0;
}