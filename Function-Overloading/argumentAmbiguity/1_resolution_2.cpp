#include <stdio.h>
void foo(int i)
{ printf("%d\n", i);}

void foo(double f)
{ printf("%lf\n",f );}

int main()
{
    foo(10);
    foo(10.2);
    return 0;
}