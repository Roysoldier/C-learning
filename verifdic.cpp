
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    using namespace std::literals;

    std::unordered_map<std::string, double> constantes
    {
        { "pi"s, 3.14159 },
        { "e"s, 2.71828 }
    };

    auto paire_phi = constantes.insert({ "phi"s, 1.61803 });
    if (paire_phi.second)
    {
        std::cout << "La valeur de " << paire_phi.first->first << " a bien été ajoutée." << std::endl;
    }

    auto paire_pi = constantes.insert({ "pi"s, 3.0 });
    if (!paire_pi.second)
    {
        std::cout << "La clé " << paire_pi.first->first << " existe déjà et vaut " << paire_pi.first->second << "." << std::endl;
    }

    return 0;
}