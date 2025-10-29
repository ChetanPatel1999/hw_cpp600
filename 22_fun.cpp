#include <iostream>
using namespace std;
void add()
{
    int a, b, c;
    cout << "enter first num : ";
    cin >> a;
    cout << "enter second num : ";
    cin >> b;
    c = a + b;
    cout << "addition : " << c << endl;
}
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        add();
    }
}