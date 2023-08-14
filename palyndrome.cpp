
#include <algorithm>
#include <iostream>
#include <string>
 
int main()
{
    std::string const s1 { "azerty" };
    std::string const s2 { "radar" };
    
    std::cout << std::boolalpha;
    std::cout << std::equal(std::begin(s1), std::end(s1), std::rbegin(s1), std::rend(s1)) << std::endl;
    std::cout << std::equal(std::begin(s2), std::end(s2), std::rbegin(s2), std::rend(s2)) << std::endl;

    return 0;
}