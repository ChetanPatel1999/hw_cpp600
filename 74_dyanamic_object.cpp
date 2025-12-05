// arrow operator
#include <iostream>
using namespace std;
class employ
{
    int id;
    float sallary;

public:
    void setEmploy(int a, float b)
    {
        id = a;
        sallary = b;
    }
    void getEmploy()
    {
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
    }
};
int main()
{
    employ *ptr = new employ;
    ptr->setEmploy(101, 15000);
    ptr->getEmploy();

    employ *ptr1 = new employ;
    ptr1->setEmploy(102, 20000);
    ptr1->getEmploy();

    return 0;
}