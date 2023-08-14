#include <iostream>
#include <vector>

int main() {
    std::vector <int> tab { 5, -2, 74, 455, -12};
    int max {0};
    int min {0};

    for (auto const i : tab) {
        if (i > max or max == 0) {
            max = i;
        }
        if (i < min or min == 0) {
            min = i;
        }
    }
    std::cout << "Le max est : " << max << " et le min : " << min << std::endl;
}