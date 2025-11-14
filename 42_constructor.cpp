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
    Student(string s, int r, float p)
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

    static void getTotalResult()
    {
        cout << "total Pass : " << totalpass << endl;
        cout << "total fail : " << totalfail << endl;
        cout << "------------------------------" << endl;
    }
    static void getTotleStudent()
    {
        cout << "total student : " << totalStudent << endl;
        cout << "------------------------------" << endl;
    }
    static void classInfo()
    {
        cout << "i am Student class" << endl;
        cout << "i have 4-5 methods" << endl;
    }
};
int Student::totalStudent = 0;
int Student::totalpass = 0;
int Student::totalfail = 0;
int main()
{
    Student s1("anirudh", 101, 12);
    Student s2("gouri", 102, 8);
    Student s3("balram", 103, 79);
    Student s4("prohit", 104, 58);
    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();

    Student::getTotalResult();
    Student::getTotleStudent();
    Student::classInfo();
    return 0;
}