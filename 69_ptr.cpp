#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr, i;
    ptr = arr;
    cout << "enter arrey element : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    ptr = arr;
    cout << "array element are : " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
    return 0;
}