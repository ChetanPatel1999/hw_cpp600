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
    void result(int per)
    {
        if (per >= 33)
        {
            cout << "pass" << endl;
        }
        else
        {
            cout << "fail" << endl;
        }
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
    void result(int per)
    {
        if (per >= 50)
        {
            cout << "pass" << endl;
        }
        else
        {
            cout << "fail" << endl;
        }
    }
};
int main()
{
    EngStd s1;
    s1.setStudent("raj", 101);
    s1.setEngStd(3, "cs");
    s1.getStudent();
    s1.getEngStd();
    s1.result(45);

    MediStud s2;
    s2.setStudent("gouri", 102);
    s2.setMediStd(3, "artho");
    s2.getStudent();
    s2.getMediStd();
    s2.result(38);
    return 0;
}