#include <iostream>
using namespace std;
void add(int a, int b)
{
    int c;
    c = a + b;
    cout << "addition :" << c << endl;
}
int main()
{
    int x = 12, y = 10;
    add(x, y);
    add(34, 8);
    add(5, 9);
    add(20, 55);
    return 0;
}