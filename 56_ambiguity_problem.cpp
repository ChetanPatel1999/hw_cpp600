// multiple inheritance
#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "good morning " << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "good afternoon" << endl;
    }
};

class derived : public base1, public base2
{
public:
    void greet()
    {
        // base2::greet();
        base1::greet();
    }
};
int main()
{
    derived d1;
    d1.greet();
    return 0;
}