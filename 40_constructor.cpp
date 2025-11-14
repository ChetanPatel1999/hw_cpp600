// constructor in cpp
#include <iostream>
using namespace std;
class Test
{
    int x, y; // instance variable
public:
    Test() {}
    Test(int a, int b)
    {
        x = a;
        y = b;
    }
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    void getData()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "---------------------" << endl;
    }
};
int main()
{
    Test t1(12, 5);
    Test t2(15, 7);
    Test t3;
    t3.setData(5, 89);
    // t1.setData(12, 5);
    // t2.setData(15, 7);
    t1.getData();
    t2.getData();
    t3.getData();

    t1.setData(20, 40);
    t1.getData();
    return 0;
}