#include <iostream>
#include <algorithm>
#include <string>

int main() {
    
    std::string const phrase { "Exemple illustrant le tutoriel C++ de Zeste de Savoir." };
    auto espace {std::find(std::begin(phrase),std::end(phrase),' ')};
    auto precedent {std::begin(phrase)};
    while (espace != std::end(phrase)) {
        std::string mot {precedent,espace};
        auto total {std::count(precedent,espace,'e')};
        std::cout << "Le mot "<< mot << " contient " << total << " e. \n";
        precedent = espace + 1;
        espace = {std::find(precedent,std::end(phrase),' ')};
        
    }

    std::string const dernier_mot { precedent, std::end(phrase) };
    std::cout << "Dans le dernier mot '" << dernier_mot << "', il y a " << std::count(precedent, std::end(phrase), 'e') << " fois la lettre 'e'." << std::endl;


    return 0;
}