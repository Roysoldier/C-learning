
#include <iostream>
#include <limits>

void entree_securisee(int & variable)
{
    while (!(std::cin >> variable))
    {
        std::cout << "Entrée invalide. Recommence." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void entree_securisee(double & variable)
{
    while (!(std::cin >> variable))
    {
        std::cout << "Entrée invalide. Recommence." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

int main()
{
    int annee { 0 };
    std::cout << "Donne-moi une année (essaye de taper un long texte, je ne broncherai pas) : ";
    entree_securisee(annee);

    return 0;
}