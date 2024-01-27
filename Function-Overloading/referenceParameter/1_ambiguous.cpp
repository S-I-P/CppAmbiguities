#include <stdio.h>

void foo(int i){
    printf("value %d\n", i);
}
void foo(int& i){
    printf("lval %d\n", i);
}

int main(int argc, char const *argv[])
{
    int a = 1;
    foo(1);//calls foo(int i)
    foo(a);
    return 0;
}