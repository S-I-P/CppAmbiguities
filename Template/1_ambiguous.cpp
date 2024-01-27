#include <iostream>
using namespace std;

template <typename T, int value> class A {
public:
    T t;
    int val=value;
    A() {
        cout<<"constructor "<<val<<endl;
    }
};

int main(int argc, char const *argv[])
{
    A<int, 4>7 > a;
    return 0;
}