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
    employ e1;
    employ *ptr;
    ptr = &e1;
    ptr->setEmploy(101, 12000);
    ptr->getEmploy();
    return 0;
}