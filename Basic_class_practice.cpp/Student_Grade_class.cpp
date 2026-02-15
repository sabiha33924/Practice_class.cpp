#include <iostream>
using namespace std;

class StudentGrade
{
    float mark;

public:
    string name;

    void set_student(string name, float mark);
    void get_student();
    void check_grade();
};

int main()
{
    StudentGrade s;

    s.set_student("Sabiha Sultana", 90.5);
    s.get_student();

    return 0;
}

void StudentGrade::set_student(string name, float mark)
{
    this->name = name;
    this->mark = mark;
}

void StudentGrade::check_grade()
{
    if (mark >= 80)
        cout << "Grade : A+" << endl;
    else if (mark >= 60)
        cout << "Grade : B+" << endl;
    else if (mark >= 40)
        cout << "Grade : C+" << endl;
    else
        cout << "Grade : F" << endl;
}

void StudentGrade::get_student()
{
    cout << "Name  : " << this->name << endl;
    cout << "Mark : " << this->mark << endl;

    check_grade();
}
