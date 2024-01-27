#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1;
    if( a )
        if( a < 1) printf("a < 1\n");

    else
    {
        printf("a = 0\n");
    }
    
    return 0;
}