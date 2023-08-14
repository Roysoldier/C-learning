#include <iostream>

int main()
{
    std::cout << "Donne-moi ton âge: ";
    int age { 0 };
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Tu es majeur." << std::endl;
    }
    else // ou else if pour rajouter une condition ...
    {
        std::cout << "Tu es mineur." << std::endl;
    }

    return 0;
}