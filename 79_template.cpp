// template with multiple parameter
#include <iostream>
using namespace std;

template <class t1, class t2>
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
    data<int, int> d1(12, 7);
    d1.getData();

    data<float, string> d2(3.4, "ram");
    d2.getData();

    data<string, char> d3("hello", 'R');
    d3.getData();

    data<char, int> d4('K', 67);
    d4.getData();
    return 0;
}