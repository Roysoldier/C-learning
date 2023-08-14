#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string const phrase { "Exemple illustrant le tutoriel C++ de Zeste de Savoir." };

    // On obtient un itérateur pointant sur le premier espace trouvé.
    // Si l'on n'avait rien trouvé, on aurait obtenu std::end(phrase) comme valeur de retour.
    auto const iterateur_premier_mot { std::find(std::begin(phrase), std::end(phrase), ' ') };

    // On peut donc s'en servir ici. Même si l'on modifie la longueur du premier mot, on est assuré que cette solution marche.
    auto const total_premier_mot { std::count(std::begin(phrase), iterateur_premier_mot, 'e') };
    std::cout << "Dans le premier mot, il y a " << total_premier_mot << " 'e' minuscule." << std::endl;

    return 0;
}