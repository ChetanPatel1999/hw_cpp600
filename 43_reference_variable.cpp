#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;                  // reference variable
    cout << "a = " << a << endl; // 12
    cout << "b = " << b << endl; // 12

    a = 90;

    cout << "a = " << a << endl; // 90
    cout << "b = " << b << endl; // 90
    return 0;
}