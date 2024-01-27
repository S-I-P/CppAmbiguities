#include <iostream>
#include <vector>

using namespace std;

void plus (vector <int> *n1, vector <int> *n2)
{
    //code
}


int main()
{
    unsigned int i;
    vector<int> n1, n2;
    for (i = 1; i < 5; ++i)
    {
        n1.push_back (i);
    }
    for (i = 9; i > 5; --i)
    {
        n2.push_back (i);
    }
    ::plus (&n1, &n2);
    return 0;
}