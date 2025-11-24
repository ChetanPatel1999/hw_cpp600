#include <iostream>
using namespace std;
class person
{
protected:
    string name;

public:
    void setName(string s)
    {
        name = s;
    }
};
class student : public person
{
protected:
    int rno;

public:
    void setRno(int r)
    {
        rno = r;
    }
};
class EngStd : public student
{
    string branch;

public:
    void setBranch(string b)
    {
        branch = b;
    }
    void getEngStd()
    {
        cout << "name : " << name << endl;
        cout << "rno : " << rno << endl;
        cout << "branch : " << branch << endl;
    }
};
int main()
{
    EngStd s1;
    s1.setName("gori");
    s1.setRno(101);
    s1.setBranch("cyber security");
    s1.getEngStd();
    return 0;
}