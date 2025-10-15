#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "enter your name : ";
    // cin >> name;    // take only single word
    getline(cin, name);
    cout << "name = " << name;
    return 0;
}