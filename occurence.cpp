#include <iostream>
#include <vector>

int main() {
    std::vector<char> const lettres { 'a', 'b', 'b', 'c', 'b', 'd', 'd', 'a' };
    char const lettre_a_compter { 'b' };
    int nbr {0};
    for (auto const i : lettres) {
        if (i == lettre_a_compter) {
            nbr++;
        }
    }
std::cout << "Il y à : " << nbr << " fois la lettre " << lettre_a_compter << " dans le tableau !" << std::endl;
}