// wap to check voter is eligibel for voting or not.
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "you can vote";
    }
    else
    {
        cout << "you can not vote";
    }
    return 0;
}