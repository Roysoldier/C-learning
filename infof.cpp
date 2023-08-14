#include <iostream>
#include <algorithm>
#include <limits>
#include <stdexcept>
#include <string>
#include <fstream>

struct InformationPersonelle {
    std::string name;
    std::string surname;
    std::string sexe;
    int age;
};


template <typename Types,typename Maximum>
void secur(Types & a,Maximum max) {
    auto test = [](auto & a,auto & max) -> bool {return a <= max and a > 0;};
    while (!(std::cin >> a ) || !(test(a,max)))
        {
            if (std::cin.eof())
            {
                throw std::runtime_error("Le flux a été fermé !");
            }
            else if (std::cin.fail())
            {
                std::cout << "Entrée invalide. Recommence." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else  {
                std::cout << "Entrée impossible. Recommence." << std::endl;
            }
        }
}

template <typename Types>
void secur(Types & a) {
    while (!(std::cin >> a ) )
        {
            if (std::cin.eof())
            {
                throw std::runtime_error("Le flux a été fermé !");
            }
            else if (std::cin.fail())
            {
                std::cout << "Entrée invalide. Recommence." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        
        }
}



std::string createCSV(InformationPersonelle const & infos) {
    std::string name_fichier {infos.name + "." + infos.surname + ".csv"};
    std::ofstream fichier {name_fichier};
    fichier << infos.name << ","<<infos.surname<<","<<infos.sexe<<","<<infos.age;

    return name_fichier;
}



InformationPersonelle info() {
    InformationPersonelle infos {};
    std::cout << "Comment t'appelles-tu ?" << std::endl;
    secur(infos.name);
    std::cout << "Quel est ton nom ?" << std::endl;
    secur(infos.surname);
    std::cout << "Quel est ton sexe ?" << std::endl;
    secur(infos.sexe);
    std::cout << "Quel est ton age ?" << std::endl;
    secur(infos.age,120);

    return infos;
}

int main()
{
    auto infos = info();
    std::string name_fichier {""};
    name_fichier = createCSV(infos);
    std::cout << "Bonjour " << infos.name << " " << infos.surname << ", tu es un " << infos.sexe << " de " << infos.age << std::endl;
    std::cout << "Ces infos serons enregistrer dans le fichier : " << name_fichier;
    return 0;
}