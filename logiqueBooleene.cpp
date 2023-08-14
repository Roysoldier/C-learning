
#include <iostream>

int main()
{
    int const prix_voiture { 5000 };
    int const argent { 6000 };
    bool const a_le_permis { true };

    if (argent >= prix_voiture && a_le_permis)
    {
        std::cout << "Voici les clés, bonne route." << std::endl;
    }
    else
    {
        std::cout << "Désolé, vous allez devoir prendre le bus." << std::endl;
    }

    return 0;
}