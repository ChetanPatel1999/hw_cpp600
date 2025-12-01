#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;

public:
    Student(string n, int r)
    {
        name = n;
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
    EngStd(string n, int r, int s, string b) : Student(n, r)
    {
        sem = s;
        branch = b;
    }
    void getEngStd()
    {
        getStudent();
        cout << "sem : " << sem << endl;
        cout << "branch : " << branch << endl;
    }
};

int main()
{
    EngStd e1("raj", 101, 5, "CS");
    e1.getEngStd();

    return 0;
}