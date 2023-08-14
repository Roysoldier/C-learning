#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nbr {1,4,6,34,65,5,23};
    if (std::any_of(std::cbegin(nbr),std::cend(nbr),[](int a) -> bool {return a < 0;}))
    {
        std::cout << "Un nombre est négatif au moin !";
    }
    else {
        std::cout << "Aucun nombre négatif !!!";
    }
    
}