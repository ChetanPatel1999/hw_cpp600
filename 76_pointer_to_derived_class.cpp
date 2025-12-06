#include <iostream>
using namespace std;
class base
{
protected:
    int num1;

public:
    base(int a)
    {
        num1 = a;
    }
    virtual void display()
    {
        cout << "value of num1 = " << num1 << endl;
    }
};
class derived : public base
{
    int num2;

public:
    derived(int a, int b) : base(a)
    {
        num2 = b;
    }
    void display() // override display
    {
        cout << "value of num1 = " << num1 << endl;
        cout << "value of num2 = " << num2 << endl;
    }
};
int main()
{
    base *baseptr = new base(50);
    baseptr->display();

    cout << "--------------------------" << endl;

    baseptr = new derived(80, 100);
    baseptr->display();

    return 0;
}