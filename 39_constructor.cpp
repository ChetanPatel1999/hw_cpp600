// constructor in cpp
#include <iostream>
using namespace std;
class Test
{
    public:
    Test()
    {
        cout << "0 args constructor is called" << endl;
    }
    Test(int a)
    {
        cout << "1 args constructor is called" << endl;
    }
    Test(int a, int b)
    {
        cout << "2 args constructor is called" << endl;
    }
    void display()
    {
        cout << "hello i am display" << endl;
    }
};
int main()
{
    Test t1(45);
    Test t2(45,56);
    return 0;
}