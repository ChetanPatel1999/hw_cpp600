#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // here we open file using constructor
    ofstream write("C:\\Users\\WIN\\Desktop\\ram\\prohit.txt");
    write << "prohit is very bright student" << endl;
    write << "he complete all task on given timing" << endl;
    write.close();
    cout<<"data write succefully"<<endl;
    return 0;
}