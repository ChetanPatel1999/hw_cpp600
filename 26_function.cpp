#include <iostream>
using namespace std;
string fun(string s1, string s2)
{
    string fullname;
    fullname = s1 + " " + s2;
    return fullname;
}
int main()
{
    cout << fun("chetan", "patel");
    return 0;
}