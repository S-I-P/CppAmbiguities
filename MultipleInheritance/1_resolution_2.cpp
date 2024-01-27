class ClassA
{
public:
    int a;
    void foo(){
        a=0;
    }
};
class ClassB :  public ClassA
{
public:
    int b;
};
class ClassC :  public ClassA
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
    obj.ClassB::a = 1;
    obj.ClassC::foo();
    return 0;
}