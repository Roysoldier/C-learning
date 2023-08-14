#define NOMINMAX
#include <Windows.h>
#include <string>
int main()
{
    SetConsoleOutputCP(1252);
    //ligne à déclarer pour pouvoir utilisé auto avec des chaines de caractères !
    using namespace std::literals;
    int const nombre1 = 3;
    //const = modification impossible !
    const int nombre2  {2};
    // const peux s'érires des deux cotés
    double floatNbr {1.5};
    char simpleCara {'N'};
    int nbradd = 5;
    nbradd += 5;
    nbradd++;
    const auto nbrAuto {1};
    auto chaine {"Hola je suis Noan !"s};

    bool const vrai { true };
    bool const faux { false };
    //type booléen vrai ou faux 
    
    return 0;
}