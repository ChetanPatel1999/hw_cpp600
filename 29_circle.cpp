#include <iostream>
using namespace std;
class Circle
{
    float radius;
    float area;
    float circumference;

public:
    void setRadius(float r)
    {
        radius = r;
    }
    void calculateArea()
    {
        area = 3.141 * radius * radius;
    }
    void calculateCircumference()
    {
        circumference = 2 * 3.141 * radius;
    }
    void getCircle()
    {
        cout << "circle object info : " << endl;
        cout << "circle radius : " << radius << endl;
        cout << "circle area : " << area << endl;
        cout << "circle circumference : " << circumference << endl;
        cout << "----------------------------------------" << endl;
    }
};
int main()
{
    Circle c1, c2;
    c1.setRadius(4);
    c1.calculateArea();
    c1.calculateCircumference();
    c1.getCircle();

    return 0;
}