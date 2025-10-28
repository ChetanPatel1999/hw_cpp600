#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {40, 50, 30, 55, 88};
    cout << "array element are :" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    marks[3] = 900;

    cout << "after change array element are :" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    return 0;
}