#include <iostream>
using namespace std;
class Demo
{

    int a;        // non static
    int b;        // non static
    static int p; // static variable
    static int q; // static variable
public:
    void setData(int r, int s, int t, int u)
    {
        a = r;
        b = s;
        p = t;
        q = u;
    }
    void getData()
    {
        cout << a << "," << b << "," << p << "," << q << endl;
    }
};
int Demo::p;
int Demo::q;
int main()
{
    Demo d1, d2, d3;
    d1.setData(12, 13, 400, 500);
    d2.setData(14, 15, 600, 700);
    d3.setData(16, 17, 800, 900);
    d1.getData();
    d2.getData();
    d3.getData();

    return 0;
}