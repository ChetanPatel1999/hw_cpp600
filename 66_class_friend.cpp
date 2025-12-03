#include <iostream>
using namespace std;
class Test;
class other
{
public:
    void dispRno(Test);
    void dispAge(Test);
};
class Test
{
private:
    int rno;
    int age;
    friend class other;
public:
    void setData(int a, int b)
    {
        rno = a;
        age = b;
    }
};
void other::dispRno(Test obj)
{
    cout << "rno = " << obj.rno << endl;
}
void other::dispAge(Test obj)
{
    cout << "age = " << obj.age << endl;
}
int main()
{
    Test o1;
    o1.setData(101, 25);

    other o2;
    o2.dispAge(o1);
    o2.dispRno(o1);
    return 0;
}