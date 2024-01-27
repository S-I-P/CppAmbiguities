#include <stdio.h>

void foo(int i)
{ printf("%d\n",i );}

void foo(int i, int j=1)
{ printf("%d,%d\n",i,j );}

int main(){
    foo(10);
    return 0;
}