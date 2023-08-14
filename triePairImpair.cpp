#include <iostream>
#include <vector>

int main() {
    std::vector<int> const entiers{ 5, -2, 74, 455, -12, 10, 11 };
    std::vector<int> pair {};
    std::vector<int> impair {};

    for( auto const i : entiers) {
        if (i%2 == 0) {
            pair.push_back(i);
        }
        else {
            impair.push_back(i);
        }
    }
    
    std::cout << "Les nombres pair : " << std::endl;
    for (auto const i : pair) {
        std::cout << i << std::endl;
    }
    std::cout << "Les nombres impair : " << std::endl;
    for (auto const i : impair) {
        std::cout << i << std::endl;
    }
}