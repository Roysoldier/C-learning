#include <iostream>

int main()
{
    // Oups, ça ne marche pas...
    //std::cout << R"(Il a écrit "f(x)" au tableau.)" << std::endl;

    // Heureusement, je peux choisir moi-même mes délimiteurs.
    // Ici, tout ce qui est entre "&( et )&" n'est pas interprété.
    std::cout << R"&(Il a écrit "f(x)" au tableau.)&" << std::endl;
    return 0;
}