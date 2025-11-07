#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;
    float per;
    static int totalStudent;
    static int totalpass;
    static int totalfail;

public:
    void setStudent(string s, int r, float p)
    {
        name = s;
        rno = r;
        per = p;
        totalStudent++;
        if (per >= 33)
        {
            totalpass++;
        }
        else
        {
            totalfail++;
        }
    }
    void getResultCard()
    {
        cout << "ResultCard of student :- " << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student per : " << per << endl;
        if (per >= 33)
        {
            cout << "student pass" << endl;
        }
        else
        {
            cout << "student fail" << endl;
        }
        cout << "------------------------------------" << endl;
    }

    void getTotalResult()
    {
        cout << "total Pass : " << totalpass << endl;
        cout << "total fail : " << totalfail << endl;
        cout << "------------------------------" << endl;
    }
    void getTotleStudent()
    {
        cout << "total student : " << totalStudent << endl;
        cout << "------------------------------" << endl;
    }
};
int Student::totalStudent = 0;
int Student::totalpass = 0;
int Student::totalfail = 0;
int main()
{

    Student s1, s2, s3, s4;
    s1.setStudent("anirudh", 101, 12);
    s2.setStudent("gouri", 102, 8);
    s3.setStudent("balram", 103, 79);
    s4.setStudent("prohit", 104, 58);
    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();

    s1.getTotalResult();
    s1.getTotleStudent();
    return 0;
}