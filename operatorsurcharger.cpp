
#include <cmath>
#include <iostream>
#include <string>

struct Fraction
{
    int numerateur;
    int denominateur;
};

struct Random {
    int nbr1;
    int nbr2;
};

Fraction operator-(Fraction const & fraction)
{
    return { -std::abs(fraction.numerateur), std::abs(fraction.denominateur) };
}

std::ostream & operator<<(std::ostream & flux, Fraction const & fraction)
{
    return flux << fraction.numerateur << "/" << fraction.denominateur;
}





int main()
{
    Random const nbr {12,54};
    Fraction const un_quart { 1, 4 };
    std::cout << "L'opposé de 1/4 est " << -un_quart << std::endl;
    return 0;
}