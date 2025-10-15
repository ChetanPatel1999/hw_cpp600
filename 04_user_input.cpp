#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    float height;
    char gender;
    cout << "enter your name : ";
    cin >> name;
    cout << "enter your age : ";
    cin >> age;
    cout << "enter your height : ";
    cin >> height;
    cout << "enter your gender : ";
    cin >> gender;

    
    cout << "name of person = " << name << endl;
    cout << "age of person = " << age << endl;
    cout << "height of person = " << height << endl;
    cout << "gender of person = " << gender << endl;
    return 0;
}