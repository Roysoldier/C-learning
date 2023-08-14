#include <iostream>

int main() {
    std::cout << "Quel heure il est ? " << std::endl ; 
    int hour {0};
    std::cin >> hour;

    if (hour >= 8 && hour <12) {
        std::cout << "C'est le matin !";
    }
    else if (hour == 12) {
        std::cout << "C'est le Midi !";
    }
    else if (hour > 12 && hour <= 18 ) {
        std::cout << "C'est l'après midi !";
    }
    else if (hour > 18 && hour <= 21) {
        std::cout << "C'est le soir !";
    }
    else if (hour == 24 || hour == 0) {
        std::cout << "Il est minuit !";
    }
    else if ((hour > 21 && hour < 24) || (hour > 0 &&  hour < 8)) {
        std::cout << "C'est la Nuit !";
    }
    else {
        std::cout << "Le nombre rentrer n'est pas valide !";
    }

    return 0 ;
}

/* 
########################
#######CORRECTION#######
########################

#include <iostream>

int main()
{
    std::cout << "Quelle heure est-il ?" << std::endl;
    int heure { 0 };
    std::cin >> heure;

    if (heure > 0 && heure < 7)
    {
        std::cout << "Zzz..." << std::endl;
    }
    else if (heure >= 7 && heure < 12)
    {
        std::cout << "C'est le matin !" << std::endl;
    }
    else if (heure == 12)
    {
        std::cout << "Il est midi !" << std::endl;
    }
    else if (heure > 12 && heure < 18)
    {
        std::cout << "C'est l'après-midi !" << std::endl;
    }
    else if (heure >= 18 && heure < 24)
    {
        std::cout << "C'est le soir !" << std::endl;
    }
    else if (heure == 24 || heure == 0)
    {
        std::cout << "Il est minuit, dormez brave gens !" << std::endl;
    }
    else
    {
        std::cout << "Il est l'heure de réapprendre à lire l'heure !" << std::endl;
    }

    return 0;
}
*/