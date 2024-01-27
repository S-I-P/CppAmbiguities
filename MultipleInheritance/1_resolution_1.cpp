class ClassA
{
public:
    int a;
    void foo(){
        a=0;
    }
};
class ClassB : virtual public ClassA
{
public:
    int b;
};
class ClassC : virtual public ClassA
{
public:
    int c;
};
class ClassD : public ClassB, public ClassC
{
public:
    int d;
};
int main(int argc, char const *argv[])
{
    ClassD obj;
    obj.a = 1;
    obj.foo();
    return 0;
}