#include <iostream>
#include <vector>

int main() {
    std::vector<int> const tableau_de_int { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::cout << "Le premier élément est " << tableau_de_int.front() << "." << std::endl;
    std::cout << "Le dernier élément est " << tableau_de_int.back() << "." << std::endl;

    auto const taille { std::size(tableau_de_int) };
    std::cout << "Mon tableau contient " << taille << " éléments." << std::endl;
    return 0;
}