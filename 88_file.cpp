// read data from file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read;
    string s;
    read.open("C:\\Users\\WIN\\Desktop\\ram\\dipesh.txt");
    read >> s;
    cout << s << endl;
    read >> s;
    cout << s << endl;
    read.close();
    return 0;
}