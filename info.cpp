#include <iostream>
#include <algorithm>
#include <limits>
#include <stdexcept>


int main()
{
    auto lambda = [](auto & a,auto max,auto test) -> void {
        while (!(std::cin >> a ) || !(test(a,max)))
        {
            if (std::cin.eof())
            {
                throw std::runtime_error("Le flux a été fermé !");
            }
            else if (std::cin.fail())
            {
                std::cout << "Entrée invalide. Recommence." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else  {
                std::cout << "Entrée impossible. Recommence." << std::endl;
            }
        }
    } ;

    auto test = [](auto & a,auto & max) -> bool {return a <= max and a > 0;};

    int jour { 0 };
    std::cout << "Quel jour es-tu né ? ";
    lambda(jour,31,test);
    // Entrée.

    int mois { 0 };
    std::cout << "Quel mois ? ";
    lambda(mois,12,test);
    // Entrée.

    int annee { 0 };
    std::cout << "Quelle année ? ";
    lambda(annee,2023,test);
    // Entrée.

    double taille { 0.0 };
    std::cout << "Quelle taille ? ";
    lambda(taille,3,test);
    // Entree.

    std::cout << "Tu es né le " << jour << "/" << mois << "/" << annee << " et tu mesures " << taille << "m." << std::endl;
    return 0;
}