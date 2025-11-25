// virtual base class concept
#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "hi i am display of base class" << endl;
    }
};
class derived1 : virtual public base
{
};
class derived2 : virtual public base
{
};
class lastDerived : public derived1, public derived2
{
};
int main()
{
    lastDerived o1;
    o1.display();
    return 0;
}