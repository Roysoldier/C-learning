#include <iostream>

int main() {
    std::cout << "Choisit le nombre j'usqu'au quel on vas compter : ";
    int nbr {0};
    std::cin >> nbr;
    for(int i {0}; i < nbr ; i++){
        if (i%2 != 0) {
            continue;
        }
        std::cout << i << std::endl;
    }

    return 0;
}
