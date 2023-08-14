#include <iostream>

void rectangle(int L,int l) {
    char type {'*'};
    for(int i {0} ; L > i ; i++ ) {
        for (int v {0} ; l > v ; v++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    
}

int main() {
    rectangle(4,3);
}