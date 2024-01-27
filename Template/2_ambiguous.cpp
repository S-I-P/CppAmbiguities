#include <iostream>
using namespace std;

template <typename T, int value> T foo(T param1, T param2) {
    if(value<=0) {
        return param1;
    }
    return param2;
}

int main(int argc, char const *argv[])
{
    cout << foo<int, -3>2 >(0,1) << endl;
    return 0;
}