// read data from file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("C:\\Users\\WIN\\Desktop\\ram\\dipesh.txt");
    string s;
    getline(read, s);
    cout << s << " ";
    read.close();
    return 0;
}