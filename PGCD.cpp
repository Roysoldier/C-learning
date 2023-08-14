#include <iostream>

int main () {
    std::cout << "Choisit le Premier Nombre : ";
    int nbr1 {0};
    std::cin >> nbr1;
    std::cin.clear();
    std::cout << "Choisit le Deuxième nombre : ";
    int nbr2 {0};
    std::cin >> nbr2;

    double reste = nbr1 % nbr2;
    while (reste != 0)
    {
        nbr1 = nbr2;
        nbr2 = reste;
        reste = nbr1 % nbr2;
    }

    std::cout << "Le nombre PGCD est : " << nbr2 << std::endl;
    
}