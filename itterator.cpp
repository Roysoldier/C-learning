
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> nombres { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    // Certains éléments.
    nombres.erase(std::begin(nombres) + 2, std::begin(nombres) + 5);

    for (auto nombre : nombres)
    {
        std::cout << nombre << std::endl;
    }

    std::cout << std::endl;

    std::string phrase { "Voici une phrase beurk !" };
    // Jusqu'à la fin.
    phrase.erase(std::begin(phrase) + 16, std::end(phrase));
    std::cout << phrase << std::endl;

    return 0;
}