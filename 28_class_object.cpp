#include <iostream>
using namespace std;
class mouse
{
    string Cname; // data member
    int price;
    float rating;

public:
    void setMouse(string s1, int p, float r) // method
    {
        Cname = s1;
        price = p;
        rating = r;
    }
    void getMouse() // method
    {
        cout << "mouse info : " << endl;
        cout << "mouse Cname : " << Cname << endl;
        cout << "mouse price : " << price << endl;
        cout << "mouse rating : " << rating << endl;
        cout << "---------------------------" << endl;
    }
};

int main()
{
    mouse m1, m2, m3;
    m1.setMouse("HP", 200, 3.4);
    m2.setMouse("Dell", 300, 4.4);
    m3.setMouse("lenovo", 130, 2.6);

    m1.getMouse();
    m2.getMouse();
    m3.getMouse();
    return 0;
}