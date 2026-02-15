#include <iostream>
using namespace std;

class Admission
{
    float ssc, hsc;

public:
    string name;

    void set_student(string name, float ssc, float hsc);
    void get_student();
};

int main()
{
    Admission a;

    a.set_student("Sabiha", 5.0, 5.0);
    a.get_student();

    return 0;
}

void Admission::set_student(string name, float ssc, float hsc)
{
    this->name = name;
    this->ssc = ssc;
    this->hsc = hsc;
}

void Admission::get_student()
{
    cout << "Name : " << this->name << endl;
    cout << "SSC  : " << this->ssc << endl;
    cout << "HSC  : " << this->hsc << endl;
}
