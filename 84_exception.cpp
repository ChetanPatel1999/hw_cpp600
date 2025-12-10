#include <iostream>
using namespace std;
int main()
{
    cout << "start program .." << endl;
    int x = -12;
    try
    {
        cout << "inside try block " << endl;
        if (x < 0)
        {
            throw x;
        }
        cout << "value of  x = " << x << endl;
        cout << "try run succesfully" << endl;
    }
    catch (int x)
    {
        cout << "catch block is run" << endl;
        cout << "nagative value error" << endl;
    }
    cout << "syntax after catch try block 1 " << endl;
    cout << "syntax after catch try block 2 " << endl;
    cout << "syntax after catch try block 3 " << endl;
    return 0;
}