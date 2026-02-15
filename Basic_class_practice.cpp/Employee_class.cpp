#include <iostream>
using namespace std;

class Employee
{
    int id;
    double salary;

public:
    string name;

    void set_employee(int id, double salary, string name);
    void get_employee();
};

int main()
{
    Employee e;
    e.set_employee(1001, 35000, "Rahim");
    e.get_employee();

    return 0;
}

void Employee::set_employee(int id, double salary, string name)
{
    this->id = id;
    this->salary = salary;
    this->name = name;
}

void Employee::get_employee()
{
    cout << "Employee Name   : " << this->name << endl;
    cout << "Employee ID     : " << this->id << endl;
    cout << "Employee Salary : " << this->salary << endl;
}