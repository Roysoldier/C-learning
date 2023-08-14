#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> nbr {1,-45,54,-4,34};

    std::sort(std::begin(nbr),std::end(nbr), [](int a,int b) -> bool {return std::abs(a) < std::abs(b);});

    for( int i : nbr) {
        std::cout << i << std::endl;
    }

    return 0;
}