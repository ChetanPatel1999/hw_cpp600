// arrow operator
#include <iostream>
using namespace std;
class employ
{
    int id;
    float sallary;

public:
    void setEmploy()
    {
        cout << "enter employ info :" << endl;
        cout << "enter emp id : ";
        cin >> id;
        cout << "enter emp sallary : ";
        cin >> sallary;
    }
    void getEmploy()
    {
        cout << "\nemp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "-----------------------------------" << endl;
    }
};
int main()
{
    employ *ptr = new employ[5];
    employ *temp = ptr;

    int i;
    for (i = 0; i < 5; i++)
    {
        ptr->setEmploy();
        ptr++;
    }
    ptr = temp;
    for (i = 0; i < 5; i++)
    {
        ptr->getEmploy();
        ptr++;
    }
    return 0;
}