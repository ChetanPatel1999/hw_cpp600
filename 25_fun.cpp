#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    cout << add(12, 5)<<endl;

    int res = add(10, 23);
    cout << res;
    return 0;
}