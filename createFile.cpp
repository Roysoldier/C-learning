#include <fstream>
#include <iostream>
#include <string>
#include <vector>
int main()
{
      std::vector<std::string> const phrases
    {
        u8"Voici un mot important.\n",
        u8"Russe : резиновые перчатки",
        u8"Polonais : gumowe rękawiczki",
        u8"Roumain : mănusi de cauciuc"
    };

    std::ofstream fichier { "sortie.txt", std::ios::app  };
    for (auto const & phrase : phrases)
    {
        fichier << phrase << std::endl;
    }
    
    return 0;
}
