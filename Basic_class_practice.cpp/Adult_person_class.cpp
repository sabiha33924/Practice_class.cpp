#include <iostream>
using namespace std;
class Person
{
    int age;
public:
    string name;
    void set_person(int age,string name);
    void get_person();
    void check_adult();
};
int main()
{
    Person p;
    p.set_person(21,"Mst.Sabiha Sultana");
    p.get_person();
    return 0;
}
void Person::set_person(int age,string name)
{
    this->age = age;
    this->name = name;
}
void Person::check_adult()
{
    if (age >= 18)
        cout << "Yes, Adult Person" << endl;
    else
        cout << "No, Not Adult Person" << endl;
}
void Person::get_person()
{
    cout << "Name : " << this->name << endl;
    cout << "Age  : " << this->age << endl;

    check_adult();
}