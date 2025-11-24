#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;

public:
    void setStudent(string s, int r)
    {
        name = s;
        rno = r;
    }
    void getStudent()
    {
        cout << "name : " << name << endl;
        cout << "rno : " << rno << endl;
    }
};

class EngStd : public Student
{
    int sem;
    string branch;

public:
    void setEngStd(int s, string b)
    {
        sem = s;
        branch = b;
    }
    void getEngStd()
    {
        cout << "sem : " << sem << endl;
        cout << "branch : " << branch << endl;
    }
};

class MediStud : public Student
{
    int prof;
    string speci;

public:
    void setMediStd(int p, string s)
    {
        prof = p;
        speci = s;
    }
    void getMediStd()
    {
        cout << "prof : " << prof << endl;
        cout << "speci : " << speci << endl;
    }
};
int main()
{
    EngStd s1;
    s1.setStudent("raj", 101);
    s1.setEngStd(3, "cs");
    s1.getStudent();
    s1.getEngStd();

    MediStud s2;
    s2.setStudent("gouri", 102);
    s2.setMediStd(3, "artho");
    s2.getStudent();
    s2.getMediStd();
    return 0;
}