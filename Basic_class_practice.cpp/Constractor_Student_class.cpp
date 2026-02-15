#include <iostream>
using namespace std;
class Student
{
    int roll;
    float marks;
public:
    string name;
    string department;
    Student(int roll, float marks, string name, string department);
    void get_student();
};
int main()
{
    Student s1(101, 88.5, "Sabiha", "CSE");
    Student s2(102, 75.0, "Asha", "EEE");
    Student s3(103, 92.0, "Mitu", "BBA");
    Student s4(104, 60.0, "Sara", "CSE");
    s1.get_student();
    cout << endl;
    s2.get_student();
    cout << endl;
    s3.get_student();
    cout << endl;
    s4.get_student();
    return 0;
}
Student::Student(int roll, float marks, string name, string department)
{
    this->roll = roll;
    this->marks = marks;
    this->name = name;
    this->department = department;
}

void Student::get_student()
{
    cout << "Name  : " << this->name << endl;
    cout << "Roll  : " << this->roll << endl;
    cout << "Marks : " << this->marks << endl;
    cout << "Department : " << this->department << endl;
}
