#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> tableau { -8, 5, 45, -945 };
    std::sort(std::begin(tableau), std::end(tableau), std::greater<int> {});
    
    for (auto x : tableau)
    {
        std::cout << x << std::endl;
    }
    
    return 0;
}