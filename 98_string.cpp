#include <iostream>
using namespace std;
int main()
{
    string s = "ramlal ji";
    string s2 = "indore wale";
    cout << s << endl;
    // s.append("indore wale");
    s.append(" ");
    s.append(s2);
    cout << s << endl;

    return 0;
}