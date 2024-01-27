#include <iostream>
#include <vector>

using namespace std;

void plus (vector <int> *vec1, vector <int> *vec2)
{
    //code
}


int main()
{
    unsigned int i;
    vector <int> vec1, vec2;
    for (i = 1; i < 5; ++i)
    {
        vec1.push_back (i);
    }
    for (i = 9; i > 5; --i)
    {
        vec2.push_back (i);
    }
    plus (&vec1, &vec2);
    return 0;
}