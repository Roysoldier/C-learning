
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> tableau { -8, 45, 35, 9 };

    // Sera toujours une variable.
    auto premier_element_variable { tableau[0] };
    // Est en fait une référence sur cet élément, ce qui autorise à le modifier.
    decltype(tableau[1]) deuxieme_element_reference { tableau[1] };

    // Modifions et regardons.
    premier_element_variable = 89;
    deuxieme_element_reference = 1;

    for (auto const & element : tableau)
    {
        std::cout << element << std::endl;
    }

    return 0;
}