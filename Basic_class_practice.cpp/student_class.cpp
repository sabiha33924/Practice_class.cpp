#include <iostream>
using namespace std;

class Student
{
    int roll;
    float marks;

public:
    string name;

    void set_student(int roll, float marks, string name);
    void get_student();
};

int main()
{
    Student s;
    s.set_student(101, 88.5, "Sabiha");
    s.get_student();

    return 0;
}

void Student::set_student(int roll, float marks, string name)
{
    this->roll = roll;
    this->marks = marks;
    this->name = name;
}

void Student::get_student()
{
    cout << "Name  : " << this->name << endl;
    cout << "Roll  : " << this->roll << endl;
    cout << "Marks : " << this->marks << endl;
}