#include <iostream>
using namespace std;

template <class t>
class data
{
    t data1;
    t data2;

public:
    data(t a, t b)
    {
        data1 = a;
        data2 = b;
    }
    void getData()
    {
        cout << "data1 = " << data1 << endl;
        cout << "data2 = " << data2 << endl;
        cout << "-----------------------------" << endl;
    }
};
int main()
{
    data<int> d1(12, 7);
    d1.getData();

    data<float> d2(3.4, 6.8);
    d2.getData();

    data<string> d3("hello", "gouri");
    d3.getData();

    data<char> d4('K', 'P');
    d4.getData();
    return 0;
}