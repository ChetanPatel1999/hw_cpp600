#include <iostream>
using namespace std;
class parent
{
public:
    void show()
    {
        cout << "parent show method is called" << endl;
    }
};
class child : public parent
{
public:
    void show() // parent class method override
    {
        cout << "child class show method is called" << endl;
    }
};
int main()
{
    parent p1;
    p1.show();
    child c1;
    c1.show();
    return 0;
}