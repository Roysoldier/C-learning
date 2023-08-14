#include <iostream>
#include <vector>
#include <string>

bool parentheses(std::string par) {
    int ouvrante {0};
    int fermante {0};
    bool status {true};
    for(char i : par) {
        if(i == '(') {
            ouvrante++;
        }
        else if(i == ')') {
            fermante++;
        }
        if(fermante > ouvrante) {
            status = false;
            return status;
        }
    }
    if (ouvrante!= fermante) {
        status =false;
    }
    return status;
}

int main() {
    std::cout << std::boolalpha;
    std::cout << parentheses("((()))") << std::endl;
    std::cout << parentheses("((())") << std::endl;
    std::cout << parentheses("))((") << std::endl;

    return 0;
}