#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string test { "\n\tHello !\n\t" };
    std::cout << "Avant modification : " << test << std::endl;

    auto base {std::find_if_not(std::begin(test),std::end(test),isspace)};
    test.erase(std::begin(test), base);
    std::cout << "Suppression au début : " << test << std::endl;

    std::reverse(std::begin(test),std::end(test));
    auto base2 {std::find_if_not(std::begin(test),std::end(test),isspace)};
    test.erase(std::begin(test), base2);
    std::reverse(std::begin(test),std::end(test));
    std::cout << "Suppression a la fin : " << test ;
    std::cout << "Test "<< std::endl;

}