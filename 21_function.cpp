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
    cout << "hello i am main function" << endl;
    add();
    cout << "inside main function" << endl;
    add();
    cout << "main function is end" << endl;
    return 0;
}