// dynamic memory allocation
#include <iostream>
using namespace std;
int main()
{
    // int *ptr = new int;
    // *ptr = 89;
    // cout << "*ptr = " << *ptr << endl;

    int *ptr = new int(90);
    cout << "*ptr = " << *ptr << endl;
    delete ptr;

    float *ptr1 = new float(15.67);
    cout << "*ptr = " << *ptr1 << endl;
    delete ptr1;
    return 0;
}