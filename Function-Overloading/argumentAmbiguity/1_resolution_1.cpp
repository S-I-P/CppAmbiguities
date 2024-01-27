#include <stdio.h>
void foo(int i)
{ printf("%d\n", i);}

void foo(float f)
{ printf("%f\n",f );}

int main()
{
    foo(10);
    foo((float)10.2);
    return 0;
}