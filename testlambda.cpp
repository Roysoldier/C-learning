#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool trie (int a,int b) {
if(a > b) {
    return true;
}
else {
    return false;
}
}

void testLambda(int a,int b,bool (*func)(int,int)) {
    if (func(a,b)) {
        std::cout << "a > b" << std::endl;
    }
    else {
        std::cout << "a < b" << std::endl;
    }
}


int main () {
    testLambda(10,5,trie);
    testLambda(10,5, [](int  a, int b) -> bool {
        if (a > b) {
            return false;
        }
        else {
            return true;
        }
    });
}