// method overloding
#include <iostream>
using namespace std;
class display
{
public:
    void disp(int data)
    {
        cout << "data = " << data << endl;
    }
    void disp(float data)
    {
        cout << "data = " << data << endl;
    }
    void disp(string data)
    {
        cout << "data = " << data << endl;
    }
};
int main()
{
    display d1;
    d1.disp(12);
    d1.disp(18.78f);
    d1.disp("home");
    return 0;
}