// create a file and write data inside file.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream write;
    //here we open /create a file using open methods
    write.open("C:\\Users\\WIN\\Desktop\\ram\\dipesh.txt");
    write << "hello i am chetan and i am teacher\n";
    write<<"here are present my 4 honhar student";
    write.close();
    cout << "data write succefully";
    return 0;
}