#include <iostream>
#include <vector>
#include <string>

std::vector<int> calcul_price(int price, std::vector<int> tab) {
    int rest = price;
    std::vector<int> use {};
    while(rest != 0) {
        for(int i : tab) {
            if(i <= rest) {
                while(i <= rest) {
                    rest -= i;
                    use.push_back(i);
                }
            }
        }
    }
    return use;
}

int main() {
    std::vector<int> billet {20,10,5,2,1};
    std::vector<int> use {};
    use = calcul_price(346,billet);
    for(int i : billet) {
        int nbr {0};
        for(int b :use) {
            if (b == i) {
                nbr++;
            }
        }
        if (nbr != 0) {
            std::cout << nbr << " X " << i << " euros \n";
        }
        
    }
}