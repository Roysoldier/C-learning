#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

std::vector<std::string> lire_fichier(std::string const & nom_fichier)
{
    std::vector<std::string> lignes {};
    std::string ligne { "" };
    std::ifstream fichier { nom_fichier };
    if (!fichier) {
        throw std::runtime_error("Fichier impossible à ouvrir !");
    }
    while (std::getline(fichier, ligne))
    {
        lignes.push_back(ligne);
    }

    return lignes;
}

int main()
{
    bool jobDone {false};
    while(!jobDone) {
        std::string nom_fichier { "" };
        std::cout << "Donnez un nom de fichier : ";
        std::cin >> nom_fichier;
       
        try {
        if(std::cin.eof()) {
            throw std::runtime_error("Flux d'entrée fermer !");
        }
        if(std::cin.fail()) {
            throw std::runtime_error("Mauvais type d'entree !");
        }
        auto lignes = lire_fichier(nom_fichier);
        std::cout << "Voici le contenu du fichier :" << std::endl;
        for (auto const & ligne : lignes)
        {
            std::cout << ligne << std::endl;
        }
        jobDone = true;
    }

    catch (std::runtime_error const & exception){
         // On affiche la cause de l'exception.
        std::cout << "Erreur : " << exception.what() << std::endl;
    }
    catch (std::exception const & exception) {
        std::cout << "Une erreur est survenue !" << std::endl ;
    }
   
    }
    

    return 0;
}