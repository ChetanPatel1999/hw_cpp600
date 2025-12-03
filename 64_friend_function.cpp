#include <iostream>
using namespace std;
class Test
{
private:
    int rno;
    int age;
    friend void display(Test);
public:
    void setData(int a, int b)
    {
        rno = a;
        age = b;
    }
};

void display(Test obj)
{
    cout << "rno = " << obj.rno << endl;
    cout << "age = " << obj.age << endl;
}

int main()
{
    Test o1;
    o1.setData(101, 25);
    display(o1);
    return 0;
}