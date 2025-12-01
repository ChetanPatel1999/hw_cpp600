#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "base 0 arg constructor is called" << endl;
    }
    Base(int a)
    {
        cout << "base 1 arg constructor is called" << endl;
    }
    Base(int a, int b)
    {
        cout << "base 2 arg constructor is called" << endl;
    }
};
class Derived : public Base
{
public:
    Derived() : Base(12)
    {
        cout << "Derived 0 arg constructor is called" << endl;
    }
    Derived(int a) : Base(a, 89)
    {
        cout << "Derived 1 arg constructor is called" << endl;
    }
    Derived(int a, int b)
    {
        cout << "Derived 2 arg constructor is called" << endl;
    }
};
int main()
{
    Derived d1(3, 5);
    return 0;
}