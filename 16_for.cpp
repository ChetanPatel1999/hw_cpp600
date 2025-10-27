#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter a num : ";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        cout << n * i << endl;
    }
    return 0;
}