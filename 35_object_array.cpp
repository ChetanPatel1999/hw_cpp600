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
    void getPerson()
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
    // cout << sizeof(person);
    int n;
    cout << "enter how many person you want to stote : ";
    cin >> n;
    person p[n];
    int i;
    for (i = 0; i < n; i++)
    {
        p[i].setPerson();
    }

    for (i = 0; i < n; i++)
    {
        p[i].getPerson();
    }
    return 0;
}