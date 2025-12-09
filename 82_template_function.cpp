// template function in
#include <iostream>
using namespace std;

template <class t>
void display(t data)
{
    cout << "data = " << data << endl;
}

template <class t>
t add(t a, t b)
{
    return (a + b);
}


template <class t1, class t2>
float add(t1 a, t2 b)
{
    return (a + b);
}
int main()
{
    cout << add(12, 7) << endl;
    cout << add(5.3, 8.2) << endl;
    cout << add(5.3, 8) << endl;
    // display(12);
    // display(67.89);
    // display('K');
    // display("home");
    return 0;
}