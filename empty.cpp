#include <iostream>
#include <vector>

int main()
{
    std::vector<int> const tableau_vide {};
    std::vector<int> const tableau_rempli { 1, 2, 3 };

    //permet d'avoir true ou false
    std::cout << std::boolalpha;
    std::cout << "Est-ce que tableau_vide est vide ? Réponse : " << std::empty(tableau_vide) << std::endl;
    std::cout << "Est-ce que tableau_rempli est vide ? Réponse : " << std::empty(tableau_rempli) << std::endl;

    return 0;
}