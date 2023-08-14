#include <iostream>

int main() {
    std::cout << "Nombres de Kg de Linges à laver : ";
    int linge {0};
    std::cin >> linge;

    if (linge <= 5) {
        std::cout << "On met le linge dans une machine 5kg !" << std::endl;
    }
    else if (linge > 5 && linge <= 10) {
        std::cout << "On met le linge dans une machine 10 kg !" << std::endl;
    }
    else if (linge > 10) {
        int machine {0};
        while (linge > 5) {
            if (linge >= 10){
                linge -= 10;
            }
            else {
                linge -= linge;
            }
            machine++;
        }
        if (linge != 0) {
            std::cout << "Le Linge à été répartie entre " << machine << " machine(s) de 10 et 1 machine de 5 " << std::endl;
        }
        else {
            std::cout << "Le Linge à été répartie entre " << machine << " machine(s) de 10 " << std::endl;
        }
        
    }
}