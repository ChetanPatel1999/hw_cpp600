#include <iostream>
using namespace std;
void add(int a = 2, int b = 8) // here we set default argument 8 for b
{
    cout << (a + b);
}
void billGenerate(int quantity, int price = 150)
{
    cout << "total bill = " << (price * quantity);
}
void displayUserInfo(string name, int age, string city = "indore")
{
    cout << "user info : " << endl;
    cout << "user name : " << name << endl;
    cout << "user age : " << age << endl;
    cout << "user city : " << city << endl;
    cout << "----------------------------"<< endl;
}
int main()
{
    displayUserInfo("gouri", 21, "dewas");
    displayUserInfo("abhishek", 25);
    displayUserInfo("dipesh", 27);
    displayUserInfo("dongre", 30, "betul");
    return 0;
}