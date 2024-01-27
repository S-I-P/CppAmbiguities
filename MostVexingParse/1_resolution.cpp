#include <stdio.h>

struct A {
    explicit A() {
        printf("A constructor\n");
    }
};

struct B {
    explicit B(A a) {
        printf("B constructor\n");
    }
};

int main() {
    //B b((A()));
    //uniform/{} initialization
    B b(A{});
    //B b{A()};
    //B b{A{}};
    return 0;
}