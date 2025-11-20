#include <iostream>
using namespace std;
class A // parent class
{
public:
    void m1()
    {
        cout << "class A m1 is called" << endl;
    }
    void m2()
    {
        cout << "class A m2 is called" << endl;
    }
};
class B : public A // child class
{
public:
    void m3()
    {
        cout << "class B m3 is called" << endl;
    }
    void m4()
    {
        cout << "class B m4 is called" << endl;
    }
};
int main()
{
    B o1;
    o1.m1();
    o1.m2();
    o1.m3();
    o1.m4();
    return 0;
}