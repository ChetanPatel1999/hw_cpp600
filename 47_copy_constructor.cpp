#include <iostream>
using namespace std;
class Number
{
    int num1;
    int num2;

public:
    Number() {}
    Number(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    Number(Number &obj) // copy constructor
    {
        cout << "copy constructor is called" << endl;
        num1 = obj.num1 + 5;
        num2 = obj.num2 + 5;
    }
    void getNumber()
    {
        cout << " num1 = " << num1 << endl;
        cout << " num2 = " << num2 << endl;
        cout << "---------------------" << endl;
    }
};
int main()
{
    Number n1(12, 5);
    Number n2(n1);  // user copy consrtructor is called
    Number n3 = n1; // user copy consrtructor is called
    Number n4;
    n4 = n1; // default copy constructor is called
    n1.getNumber();
    n2.getNumber();
    n3.getNumber();
    n4.getNumber();
    return 0;
}