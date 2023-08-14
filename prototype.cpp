#include <iostream>
bool est_impair(int i);
bool est_pai(int i);
bool est_pair(int i)
{
    if (i == 0)
    {
        return true;
    }
    else if (i < 0)
    {
        return est_pair(-i);
    }
    else
    {
        return est_impair(i - 1);
    }        
}

bool est_impair(int i)
{
    if (i < 0)
    {
        return est_impair(-i);
    }
    else
    {
        return est_pair(i - 1);
    }
}

int main() {
    bool s {true};
    s = est_pair(15);
    std::cout << s;
}