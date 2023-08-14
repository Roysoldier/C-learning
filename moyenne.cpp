#include <iostream>
#include <vector>

int main() {
    std::cout << "Donne autant de valeur que tu le souhaite ! : ";
    int nbr {0};
    std::vector <int> tab {};
    while (nbr >= 0) {
        std::cin >> nbr;
        if (nbr > 0) {
            tab.push_back(nbr);
        }
       
    }
    if (std::size(tab) > 0) {
        double moyenne {0};
        for (auto i : tab) {
            moyenne += i ;
        }
        std::cout << "La moyenne est : " << moyenne/std::size(tab);
    }
    else {
        std::cout << "Tu n'as pas rentrer de nombre !";
    }
    

    return 0;
}