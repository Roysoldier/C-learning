#define NOMINMAX
#include <Windows.h>
#include <string>
//import le std::string permettant d'utiliser les types strings dans le code
#include <iostream>
// include  = import fichier
// iostream = l'import export de texte 
// # = directive de préprocesseur ( Le préprocesseur est un programme qui se lance automatiquement au début de la compilation, notamment pour importer les fichiers qu’on lui demande)
int main()
{
    SetConsoleOutputCP(1252);
    using namespace std::literals;
    //ligne à déclarer pour pouvoir utilisé auto avec des chaines de caractères !

    std::string cara {"Bonjour je suis Noan !"};
    std::cout << "Hello World !" << std::endl << "J'aime les chats"<< std::endl ;// affiche Hello World !
    //std::cout  =  injection de code de l'interpreteur à l'utilisateur 
    //std::endl va à la ligne std qui indique que l'on utilise une fonction extèrieur au code et importer et endl qui indique un saut à la ligne .
    return 0;
}
// FOnction main principal de tout programme en C++