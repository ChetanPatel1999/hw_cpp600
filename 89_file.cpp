// read data from file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read;
    string s;
    read.open("C:\\Users\\WIN\\Desktop\\ram\\dipesh.txt");
    while (read.eof() != 1)
    {
        read >> s;
        cout << s << " ";
    }
    read.close();
    return 0;
}