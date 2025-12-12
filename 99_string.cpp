#include <iostream>
using namespace std;
int main()
{
    string s = "ramlal ji";
    cout << s << endl;
    // add a character in last
    s.push_back('n');
    s.push_back('a');
    cout << s << endl;
    // delete last character
    s.pop_back();
    cout << s << endl;
    return 0;
}