
#include <iostream>
#include <list>

int main()
{
    std::list<int> liste { 4, -8, 45, 2 };
    liste.sort();

    for (int i : liste)
    {
        std::cout << i << std::endl;
    }
    return 0;
}