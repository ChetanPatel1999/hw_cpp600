#include <iostream>
using namespace std;
int main()
{
    int num, res = 0, rem;
    cout << "enter a num : ";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        res = res + rem; // 18
        num = num / 10;
    }
    cout << "sum of individual digit = " << res; // 18
}