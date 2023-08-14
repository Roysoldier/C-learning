#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::string texte { "Voici une phrase que je vais couper." };
    std::vector<std::string> texted {};
    char delimiter = {' '};
    auto start {std::begin(texte)};
    auto end {std::end(texte)};
    auto iterator {find(start,end,delimiter)};

    while(iterator != end) {
        std::string mot {start,start + std::distance(start,iterator)};
        texted.push_back(mot);
        start = iterator + 1;
        iterator = find(start,end,delimiter);
    }
    std::string mot {start,start + std::distance(start,iterator)};
    texted.push_back(mot);
    for(std::string i : texted) {
        std::cout << i << std::endl;
    }
}
