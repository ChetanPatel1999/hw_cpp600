// wap to check given num is positive , nagative or zero.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a num : ";
    cin >> num; //-7
    if (num == 0)
    {
        cout << "num is zero";
    }
    else if (num > 0)
    {
        cout << "num is positive";
    }
    else
    {
        cout << "num is negative";
    }
    return 0;
}