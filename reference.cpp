
#include <iostream>
#include <string>

void fonction_reference_const(std::string const & texte)
{
    std::cout << "J'ai reçu une référence comme paramètre. Pas de copie, youpi !" << std::endl;
    // Interdit.
    // texte = "Changement";
}

void fonction_reference(std::string & modifiable)
{
    std::cout << "Je peux modifier la chaîne de caractères et les changements seront conservés." << std::endl;
    modifiable = "Exemple";
}

int main()
{
    std::string modifiable { "Du texte modifiable." };
    std::string const non_modifiable { "Du texte qui ne sera pas modifiable." };

    std::cout << "Avant : " << modifiable << std::endl;
    fonction_reference(modifiable);
    std::cout << "Après : " << modifiable << std::endl;

    fonction_reference_const(non_modifiable);
    // Possible.
    fonction_reference_const(modifiable);
    // Impossible, parce que la fonction attend une référence sur un std::string et nous lui donnons une référence sur un std::string const.
    //fonction_reference(non_modifiable);

    return 0;
}