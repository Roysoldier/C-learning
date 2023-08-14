#include <iostream>

int main()
{
    

    std::cout << "Quel jour es-tu né ? ";
    int jour { 0 };

    // Comme std::cin >> jour renvoie false s'il y a eu une erreur, afin de rentrer dans la boucle, on prend la négation de l'expression avec !
    while (!(std::cin >> jour))
    {
        std::cout << "Entrée invalide. Recommence." << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }

    std::cout << "Quel mois es-tu né ? ";
    int mois { 0 };

    // Même version avec un do while.
    do
    {
        if (std::cin.fail())
        {
            std::cout << "Entrée invalide. Recommence." << std::endl;
            std::cin.clear();
            std::cin.ignore(255, '\n');
        }

    } while (!(std::cin >> mois));

    std::cout << "Tu es né le " << jour << "/" << mois << "." << std::endl;
    return 0;
}