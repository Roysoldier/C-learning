#include <iostream>

int main()
{
    std::cout << std::boolalpha;

    bool const deux_false { (false && !false) || (false && !false) };
    std::cout << "(false && !false) || (false && !false) == " << deux_false << std::endl;

    bool const true_false { (true && !false) || (false && !true) };
    std::cout << "(true && !false) || (false && !true) == " << true_false << std::endl;

    bool const false_true { (false && !true) || (true && !false) };
    std::cout << "(false && !true) || (true && !false) == " << false_true << std::endl;

    bool const deux_true { (true && !true) || (true && !true) };
    std::cout << "(true && !true) || (true && !true) == " << deux_true << std::endl;
    
    return 0;
}