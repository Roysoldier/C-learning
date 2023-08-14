#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::ifstream fichier { "fich.txt" };
    std::string phrase { "" };

    int nbrlignev {0};
    int nbrmot {0};
    int nbrcara {0};

    while(std::getline(fichier,phrase)) {
        nbrlignev++;
        auto start {std::begin(phrase)};
        auto end {std::end(phrase)};
        auto iterator {std::find(start,end,' ')};
        while (iterator != end) {
            nbrmot++;
            start = iterator + 1;
            iterator = {std::find(start,end,' ')};
        }
        for(auto i  : phrase) {
            if(i != ' ') {
                nbrcara++;
            }
            
        }
        nbrmot++;
        std::cout << phrase << std::endl;
    }
    std::cout << "Il y a : " << nbrlignev << " lignes, " << nbrmot << " mots et " << nbrcara << " caractères !";
}