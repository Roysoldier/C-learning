
#include <cassert>

int main()
{
    // Va parfaitement fonctionner et passer à la suite.
    assert(1 == 1);
    // Va faire planter le programme.
    assert(1 == 2);
    return 0;
}