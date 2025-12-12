#include <iostream>
using namespace std;
int main()
{
    string s = "ramlal ji";
    // at method return charcter on given index
    cout << s.at(3) << endl;

    // its clear string
    //  s.clear();
    //  cout << "data : " << s << endl;
    //  s.push_back('A');
    //  cout << s << endl;

    s.replace(2, 5, "don");

    cout << s;

    return 0;
}