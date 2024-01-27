class Base1 {
public:
  int i;
  int j;
  void foo(int) { }
};

class Base2 {
public:
  int j;
  void foo() { }
};

class Derived : virtual public Base1, virtual public Base2 {
public:
  int i;
};

int main() {
  Derived dobj;
  Derived *dptr = &dobj;
  dptr->i = 5;
  dptr->j = 10;
  dptr->Base1::j = 10;
  dobj.foo();
  dobj.Base2::foo();
}