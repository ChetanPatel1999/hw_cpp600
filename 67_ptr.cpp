#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *ptr;
    ptr = &a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    *ptr = 90;

    cout << "a = " << a << endl;

    return 0;
}