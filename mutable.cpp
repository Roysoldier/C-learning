#include <iostream>

int main()
{
    int un_entier { 42 };

    // Le mot-clef 'mutable' se place après les paramètres de la lambda et avant le type de retour.
    auto lambda = [ un_entier]() mutable -> void
    {
        
        std::cout << "L'entier vaut " << un_entier << " dans la lambda." << std::endl;
        un_entier = 0;
    };

    lambda();
    std::cout << "L'entier vaut " << un_entier << " dans main." << std::endl;

    return 0;
}