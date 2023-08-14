
#include <iostream>

int main()
{
    int facteur_gauche { 1 };
    while (facteur_gauche <= 10)
    {
        for (int facteur_droite { 1 }; facteur_droite <= 10; ++facteur_droite)
        {
            std::cout << facteur_gauche << "x" << facteur_droite << " = " << facteur_gauche * facteur_droite << std::endl;
        }
        // On saute une ligne pour séparer chaque table.
        std::cout << std::endl;
        ++facteur_gauche;
    }

    return 0;
}