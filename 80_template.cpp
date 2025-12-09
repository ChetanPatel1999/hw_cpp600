// template with default parameter
#include <iostream>
using namespace std;

template <class t1 = float, class t2 = int>
class data
{
    t1 data1;
    t2 data2;

public:
    data(t1 a, t2 b)
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
    data<> d1(12.9, 7);
    d1.getData();

    data<float, string> d2(3.4, "ram");
    d2.getData();

    data<string, char> d3("hello", 'R');
    d3.getData();

    data<char> d4('K', 67);
    d4.getData();
    return 0;
}