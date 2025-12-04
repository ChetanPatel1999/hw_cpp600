#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int[5];
    int *temp = ptr;
    int i;
    cout << "enter array elemenet :" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    ptr = temp;
    cout << "array element are :" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = temp;
    delete ptr;
    cout << "\narray element are :" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}