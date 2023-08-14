#include <iostream>

int main() {
    std::cout << "Quelle est ton score ?" << std::endl;
    int score {0};
    std::cin >> score;

    if (score < 2000) {
        std::cout << "C’est la catastrophe !" << std::endl;
    }
    else if (score >= 2000 && score < 5000) {
        std::cout << "Tu peux mieux faire ! " << std::endl;
    }
    else if (score >=5000 && score < 9000) {
        std::cout << "Tu es sur la bonne voie !" << std::endl;
    }
    else if (score >= 9000) {
        std::cout << "Tu es le meilleur !" << std::endl;
    }
    else {
        std::cout << "ERROR";
    }
}



/*
########################
#######CORRECTION#######
########################

#include <iostream>

int main()
{
    std::cout << "Quel est le score du joueur ? " << std::endl;
    int score { 0 };
    std::cin >> score;

    if (score < 2000)
    {
        std::cout << "C'est la catastrophe !" << std::endl;
    }
    else if (score >= 2000 && score < 5000)
    {
        std::cout << "Tu peux mieux faire !" << std::endl;
    }
    else if (score >= 5000 && score < 9000)
    {
        std::cout << "Tu es sur la bonne voie !" << std::endl;
    }
    else
    {
        std::cout << "Tu es le meilleur !" << std::endl;
    }

    return 0;
}
*/