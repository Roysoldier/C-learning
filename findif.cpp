#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> const nombres { 2, 4, 6, 8, 9, 10, 11, 13, 16 };
    auto iterateur { std::begin(nombres) };

    do
    {
        iterateur = std::find_if(iterateur, std::end(nombres), [](int nombre) -> bool
        {
            return nombre % 2 != 0;
        });

        if (iterateur != std::end(nombres))
        {
            std::cout << "Nombre impair : " << *iterateur << std::endl;
            // On n'oublie pas d'incrémenter, sinon on bouclera indéfiniment.
            ++iterateur;
        }

    } while (iterateur != std::end(nombres));

    return 0;
}