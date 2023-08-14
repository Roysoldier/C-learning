#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_set>

void ajouter_membre(std::unordered_set<std::string> & membres, std::string const & pseudo)
{
    auto it = membres.insert(pseudo);
    if (it.second)
    {
        std::cout << "Bienvenu sur Zeste de Savoir, " << pseudo << "." << std::endl;
    }
    else
    {
        // std::quoted permet d'ajouter automatiquement des guillemets doubles autour de la valeur qu'on lui passe.
        std::cout << "Désolé, le pseudo " << std::quoted(pseudo) << " est déjà pris." << std::endl;
    }
}

int main()
{
    std::unordered_set<std::string> pseudos { "mehdidou99", "informaticienzero" };

    // Ajouts.
    pseudos.insert("Dwayn");
    pseudos.insert("artragis");
    pseudos.insert("Taurre");

    ajouter_membre(pseudos, "gbdivers");
    ajouter_membre(pseudos, "informaticienzero");

    // Suppression.
    pseudos.erase("Dwayn");

    // Parcours for.
    for (auto const & cle : pseudos)
    {
        std::cout << cle << std::endl;
    }

    // Recherche de membres.
    if (pseudos.find("Taurre") != std::end(pseudos))
    {
        std::cout << "Taurre est un membre." << std::endl;
    }

    if (pseudos.find("Gabbro") == std::end(pseudos))
    {
        std::cout << "Le pseudo " << std::quoted("Gabbro") << " est libre." << std::endl;
    }

    return 0;
}