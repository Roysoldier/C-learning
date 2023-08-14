#include <iostream>

int main()
{
    // Compte de 10 à 1. On décrémente ici.
    for (int compteur {10}; compteur > 0; --compteur)
    {
        std::cout << compteur << std::endl;
    }
    
    std::cout << "Fin du programme." << std::endl;
    return 0;
}


