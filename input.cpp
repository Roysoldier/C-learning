#include <iostream>
#include <string>
int main()
{
    std::cout << "Entre ton age : " << std::endl;
    int age { 0 };
    
    std::cin >> age;
    //::cin demande une information à l'utilisateur et le set dans une variable ici age 
    std::cin.clear();
    // restore cin sans erreur
    std::cout << "Tu as " << age << " ans.\n";

    std::cout << "Entre ton nom : ";
    std::string nom { "" };
    std::cin.ignore(255, '\n') >> nom;
    // ignore donne une limite de caractère
    std::cout << "Tu t'appelles " << nom << ".\n";

    return 0;
}