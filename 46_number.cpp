#include <iostream>
using namespace std;
class Number
{
    int num1;
    int num2;
    int num3;

public:
    // Number() // non parameterized constructor
    // {
    //     num1 = 700;
    //     num2 = 800;
    //     num3 = 900;
    // }
    // Number(int a, int b) // parameterized constructor
    // {
    //     num1 = a;
    //     num2 = b;
    //     num3 = 78;
    // }
    Number(int a = 1, int b = 2, int c = 3) // default constructor
    {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    void getNumber()
    {
        cout << " num1 = " << num1 << endl;
        cout << " num2 = " << num2 << endl;
        cout << " num2 = " << num3 << endl;
        cout << "---------------------" << endl;
    }
};
int main()
{
    Number n1;
    Number n2(34, 56);
    Number n3(4, 7, 2);
    n1.getNumber();
    n2.getNumber();
    n3.getNumber();
    return 0;
}