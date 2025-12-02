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
    Base(int a, int b)
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
class Other
{
    void show()
    {
        Base o1(500, 700);
        cout << " rno = " << o1.rno << endl;
        cout << " age = " << o1.age << endl;
        cout << " price = " << o1.price << endl;
    }
};
int main()
{
    Base b1(12, 56);
    b1.age = 20;
    b1.rno = 90;
    b1.price = 90;
    return 0;
}