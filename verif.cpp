#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main()
{
    std::string const numero { "0185017204" };
    if (std::all_of(std::cbegin(numero), std::cend(numero), isdigit))
    {
        std::cout << "C'est un numéro de téléphone correct." << std::endl;
    }
    else
    {
        std::cout << "Entrée invalide." << std::endl;
    }

    return 0;
