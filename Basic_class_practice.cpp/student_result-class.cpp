#include <iostream>
using namespace std;
class Student
{
    int mark1, mark2, mark3;
public:
    string name;
    int id;
    string faculty;
    void set_student(string name,int id,string faculty,int mark1,int mark2,int mark3);
    void get_student();
    float average();
};
int main()
{
    Student s;
    s.set_student("Sabiha", 1004, "CSE", 60, 70, 80);
    s.get_student();
    return 0;
}
void Student::set_student(string name,int id,string faculty,int mark1,int mark2,int mark3)
{
    this->name = name;
    this->id = id;
    this->faculty = faculty;
    this->mark1 = mark1;
    this->mark2 = mark2;
    this->mark3 = mark3;
}
float Student::average()
{
    return (mark1+mark2+mark3)/3.0;
}
void Student::get_student()
{
    cout << "Name : " << this->name << endl;
    cout << "ID : " << this->id << endl;
    cout << "Faculty : " << this->faculty << endl;
    cout << "Marks : " << this->mark1 <<"," << this->mark2 <<"," << this->mark3 << "," << endl;
    cout << "Average : " << average() << endl;
}