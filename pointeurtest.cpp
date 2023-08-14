#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

int square(int x) {

    return x*x;
}


void square2(int *x) {
    *x = *x**x;
    
}


int main() {
    int a {5};
    int *b;
    int c {5};
    *b = 6;
    printf("La valeur : %i \n", a);
    printf("Son adresse est : %p \n",&a);

    printf("La valeur : %i \n", *b);
    printf("Son adresse est : %p \n",b);

    square2(b);
    printf("Le carrer de c est : %i \n", *b);
    return 0;
}