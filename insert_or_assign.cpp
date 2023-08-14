#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    using namespace std::literals;

    std::unordered_map<std::string, double> constantes
    {
        { "pi"s, 3.14159 },
        { "e"s, 2.0 }
    };

    auto paire_e = constantes.insert_or_assign("e"s, 2.71828);
    if (paire_e.second)
    {
        std::cout << "La valeur a bien été ajoutée." << std::endl;
    }
    else
    {
        std::cout << "La valeur a bien été mise à jour." << std::endl;
    }

    for (auto const & paire : constantes)
    {
        std::cout << "La constante " << paire.first << " vaut " << paire.second << "." << std::endl;
    }

    return 0;
}