// function overloding
#include <iostream>
using namespace std;
void add()
{
    cout << "sum = " << (12 + 6) << endl;
}
void add(int a)
{
    cout << "sum = " << (a + 6) << endl;
}
void add(int a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(float a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(int b, float a)
{
    cout << "sum = " << (a + b) << endl;
}
void add(int a, int b, int c)
{
    cout << "sum = " << (a + b + c) << endl;
}
int main()
{
    add(4);
    add(50, 10);
    add(50.6f, 10);
    add(7, 3.4f);
    add(3, 8, 4);
    return 0;
}