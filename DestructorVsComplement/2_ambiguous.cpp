#include <iostream>
using namespace std;

class cls
{
    int num;
public:
    cls () {}
    cls(int i) {
        num=i;
        cout<<"construcor -> "<<num<<endl;
    }
    ~cls() {
        cout<<"destructor -> "<<num<<endl;
    }
    
};

int main(int argc, char const *argv[])
{
    int size = 3;
    cls* clsArray = new cls[size];
    for(int i=0; i<size; i++){
        clsArray[i] = cls(i);
        ~clsArray[i];
    }

    return 0;
}