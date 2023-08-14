#include <iostream>
#include <vector>

int main()
{
    std::vector<int> const tableau_entiers { 1, 2, 3 };

    std::cout << "Je vais afficher mon tableau en entier.\n";
    for (/* type d'un élément du tableau ou auto  identifiant :  tableau à parcourir */auto const element : tableau_entiers)
    {
        std::cout << element << std::endl;
    }

    return 0;
}