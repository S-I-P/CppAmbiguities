#include <stdio.h>

void foo(int &&i){
    printf("rvalue ref %d\n", i);
}
void foo(int& i){
    printf("lvalue %d\n", i);
}

int main(int argc, char const *argv[])
{
    int a = 1;
    foo(a);
    foo(2);
    return 0;
}