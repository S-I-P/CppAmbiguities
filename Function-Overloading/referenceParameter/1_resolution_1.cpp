#include <stdio.h>
#include <iostream>
void foo(int i){
    printf("value %d\n", i);
}
void foo(int& i){
    printf("lval %d\n", i);
}

int main(int argc, char const *argv[])
{
    int a = 1;
    foo(1);
    foo(std::move(a));
    return 0;
}