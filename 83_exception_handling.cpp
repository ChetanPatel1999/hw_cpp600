#include <iostream>
using namespace std;
int main()
{
    cout << "main function is start:  " << endl;
    cout << "this is division program  " << endl;
    int a, b, c;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
        cout << "division : " << c << endl;
    }
    catch (int b)
    {
        cout << "zero division error" << endl;
    }
    cout << "programm run succefully" << endl;
    cout << "some more code stmnt1" << endl;
    cout << "some more code stmnt2" << endl;
    cout << "some more code stmnt3" << endl;

    return 0;
}