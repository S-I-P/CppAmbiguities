#include <stdio.h>

class a{
public:
    a(){printf("%s\n", "Constructor");};
    ~a(){printf("%s\n", "Destructor");};
    void destructor(){
        this->~a();
    }
};

int main(int argc, char const *argv[])
{
    a A;
    A.destructor();
    return 0;
}