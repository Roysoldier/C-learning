#include <iostream>

int main() {
    std::cout << "Choist un nombre : ";
    int n {0};
    std::cin >> n;

    int compteur {0};
    int somme {0};
    while (compteur <= n) {
        somme += compteur;
        compteur++;
    }
    std::cout << "La Somme de tout les nombre entier jusqu'a " << n << " est : " << somme << std::endl;
    
    return 0;
}