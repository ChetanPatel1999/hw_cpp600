// how to make non static method  as static methods
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

    // void average(Student obj)
    // {
    //     float ave;
    //     ave = (per + obj.per) / 2;
    //     cout << "average of " << name << " and " << obj.name << " = " << ave << endl;
    //     cout << "----------------------------------------------------" << endl;
    // }

    static void average(Student obj1, Student obj2)
    {
        float ave;
        ave = (obj1.per + obj2.per) / 2;
        cout << "average of " << obj1.name << " and " << obj2.name << " = " << ave << endl;
        cout << "----------------------------------------------------" << endl;
    }
    static void average(Student obj1, Student obj2, Student obj3)
    {
        float ave;
        ave = (obj1.per + obj2.per + obj3.per) / 3;
        cout << "average of " << obj1.name << " and " << obj2.name << " and " << obj3.name << " = " << ave << endl;
        cout << "----------------------------------------------------" << endl;
    }
    static void greter_marks(Student obj1, Student obj2)
    {
        if (obj1.per > obj2.per)
        {
            cout << obj1.name << " have greater percentage to " << obj2.name << endl;
        }
        else
        {
            cout << obj2.name << " have greater percentage to " << obj1.name << endl;
        }
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
    s4.setStudent("prohit", 104, 90);
    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();

    Student::getTotalResult();
    Student::getTotleStudent();
    Student::classInfo();
    // s1.average(s2);

    Student::average(s1, s2);
    Student::average(s3, s2);
    Student::average(s1, s2, s3);

    Student::greter_marks(s3, s4);
    return 0;
}