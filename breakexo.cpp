#include <iostream>

int main() {
    std::cout << "Choisit un nombre à tester ! : ";
    int nbr {0};
    std::cin >> nbr;
    
    for (int i {2}; i < nbr; i++ ) {
        if ((nbr%2) == 0) {
            std::cout << "Ce nombre n'est pas premier ! " << std::endl;
            break;
        }
        if ((i+1) == nbr) {
            std::cout << "Ce nombre est premier ! "<< std::endl;
        }
    }
}