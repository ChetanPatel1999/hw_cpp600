#include <iostream>
using namespace std;
class demo
{
public:
    demo() // constructor
    {
        cout << "constructor is called" << endl;
    }
    ~demo()
    {
        cout << "destructor is called" << endl;
    }
    void display()
    {
        cout << "display is called" << endl;
    }
};
int main()
{
    cout << "main funtion is start" << endl;
    demo d1, d2;
    demo *d4 = new demo();
    d1.display();
    d2.display();
    delete d4;
    {
        demo d3;
        d3.display();
        cout << "inner block is end" << endl;
    }
    cout << "belove inner block" << endl;

    return 0;
}