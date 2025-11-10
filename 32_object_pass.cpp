#include <iostream>
using namespace std;
class number
{
    int num1;
    int num2;

public:
    void setNumber(int x, int y)
    {
        num1 = x;
        num2 = y;
    }
    void display()
    {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
        cout << "----------------------" << endl;
    }
    void addNum1(number obj)
    {
        cout << "sum = " << (num1 + obj.num1) << endl;
    }
    void addNum2(number obj)
    {
        cout << "sum = " << (num2 + obj.num2) << endl;
    }

    static void addition(number obj1, number obj2)
    {
        cout << "num1addition= " << (obj1.num1 + obj2.num1) << endl;
        cout << "num2addition= " << (obj1.num2 + obj2.num2) << endl;
    }
};
int main()
{
    number n1, n2;
    n1.setNumber(12, 34);
    n2.setNumber(5, 8);
    n1.display();
    n2.display();
    n1.addNum1(n2);
    n1.addNum2(n2);
    number::addition(n1, n2);
    return 0;
}