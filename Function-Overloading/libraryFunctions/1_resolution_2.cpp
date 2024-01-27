#include <iostream>
#include <vector>


void plus (std::vector <int> *n1, std::vector <int> *n2)
{
    //code
}


int main()
{
    unsigned int i;
    std::vector<int> n1, n2;
    for (i = 1; i < 5; ++i)
    {
        n1.push_back (i);
    }
    for (i = 9; i > 5; --i)
    {
        n2.push_back (i);
    }
    plus (&n1, &n2);
    return 0;
}