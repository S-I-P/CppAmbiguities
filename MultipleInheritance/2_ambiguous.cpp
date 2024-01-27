//example of multipath inheritance
//ambiguous base class member access
#include<stdio.h>

class A
{
public:
    void showdata()
    {
        printf("A show\n");
    }
};

class B: virtual public A
{
public:
    void showdata()
    {
        printf("B show\n");
    }

};

class C: virtual public A
{
public:
    void showdata()
    {
        printf("C show\n");
    }
};

class D: virtual public B, virtual public C
{
public:
    void show_data()
    {
        printf("D show\n");
        showdata();//ambiguous which showdata() ?
    }
};

int main(int argc, char const *argv[])
{
    D obj;
    obj.show_data();
    return 0;
}
