#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr, i;
    ptr = arr;
    cout << "array element are : " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
    return 0;
}