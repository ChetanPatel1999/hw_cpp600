#include <iostream>
using namespace std;
int main()
{
    int marks[5], i;
    cout << "enter array element : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    cout << "array element are :" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    cout << "\narray even element are :" << endl;
    for (i = 0; i < 5; i++)
    {
        if (marks[i] % 2 == 0)
        {
            cout << marks[i] << " ";
        }
    }
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    cout << endl
         << "sum of array element = " << sum;
    return 0;
}