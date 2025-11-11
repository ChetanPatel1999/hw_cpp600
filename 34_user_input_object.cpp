// how to take input form user for a object
#include <iostream>
using namespace std;
class person
{
    string name;
    int age;
    int amount;

public:
    void setPerson()
    {
        cout << "enter person info :" << endl;
        cout << "enter name : ";
        cin >> name;
        cout << "enter age : ";
        cin >> age;
        cout << "enter amount : ";
        cin >> amount;
    }
    void getPesron()
    {
        cout << "\nPerson info.. " << endl;
        cout << "Person name :" << name << endl;
        cout << "Person age :" << age << endl;
        cout << "Person amount :" << amount << endl;
        cout << "-----------------------------" << endl;
    }
};
int main()
{
    person p1, p2;
    p1.setPerson();
    p2.setPerson();
    p1.getPesron();
    p2.getPesron();
    return 0;
}