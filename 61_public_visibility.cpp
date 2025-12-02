#include <iostream>
using namespace std;
class Base
{
protected:
    int price;

private:
    int rno;

public:
    int age;
    void setBase(int a, int b)
    {
        rno = a;
        age = b;
    }

    void getBase()
    {
        cout << " rno = " << rno << endl;
        cout << " age = " << age << endl;
        cout << " price = " << price << endl;
    }
};
class Child : public Base
{
public:
    void show()
    {
        cout << " rno = " << rno << endl;
        cout << " age = " << age << endl;
        cout << " price = " << price << endl;
    }
};
class Derived : public Child
{
    void showDerived()
    {
        cout << " rno = " << rno << endl;
        cout << " age = " << age << endl;
        cout << " price = " << price << endl;
    }
};
int main()
{
    Child c1;
    c1.age = 78;
    c1.price = 78;
    return 0;
}
