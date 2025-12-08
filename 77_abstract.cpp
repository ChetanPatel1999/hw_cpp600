#include <iostream>
using namespace std;
class base // abstract class
{
protected:
    int num1;

public:
    base(int n)
    {
        num1 = n;
    }
    virtual void display() = 0; // pure virtual function
    void show()
    {
        cout << "hi i am show method" << endl;
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
    void display() // override
    {
        cout << "num1 =  " << num1 << endl;
        cout << "num2 =  " << num2 << endl;
    }
};
int main()
{
    derived d1(12, 5);
    d1.display();
    return 0;
}