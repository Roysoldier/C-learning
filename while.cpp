#include <iostream>

int main()
{
    std::cout << "Salut, je vais compter de 0 à 9." << std::endl;
    int compteur { 0 };

    while (compteur < 10)
    {
        std::cout << compteur << std::endl;
        ++compteur;
    }

    std::cout << "Je m'arrête, après je sais pas faire." << std::endl;
    return 0;
}