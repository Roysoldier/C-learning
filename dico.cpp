#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    using namespace std::literals;

    std::unordered_map<std::string, std::string> dictionnaire
    {
        { "Clem"s, "La mascotte du site Zeste de Savoir, toute gentille et toute mignonne."s },
        { "mehdidou99"s, "Un des auteurs du tutoriel C++."s },
        { "informaticienzero"s, "Un des auteurs du tutoriel C++."s },
        { "Taurre"s, "Un super validateur !"s },
        { "Arius"s, "Un membre super sympa mais qui mord."s },
        { "Gants de vaisselle"s, "Objets présents sur le site et dont personne ne sait pourquoi."s }
    };

    // Insertion avec la fonction 'insert'.
    dictionnaire.insert({ "C++"s, "Le langage que vous apprenez."s });

    // Plusieurs valeurs en même temps. Notez les doubles accolades {}.
    dictionnaire.insert({ { "Pacman++"s, "C'est un des avatars de mehdidou99."s }, { "Un truc"s, "Personne ne sait ce que c'est."s } });

    // Ajout d'une nouvelle paire avec les crochets.
    dictionnaire["nohar"] = "Un lama ancestral."s;

    // Utilisation des crochets pour modifier la valeur associée à une clé existante.
    dictionnaire["Taurre"] = "Un validateur vraiment cool !"s;
    // Accès en lecture.
    std::cout << "Qui est Taurre ? " << dictionnaire["Taurre"] << std::endl << std::endl;

    // Suppression par clé.
    dictionnaire.erase("Un truc"s);

    for (auto const & paire : dictionnaire)
    {
        std::cout << "Clé : " << paire.first << std::endl;
        std::cout << "Valeur : " << paire.second << std::endl << std::endl;
    }

    return 0;
}