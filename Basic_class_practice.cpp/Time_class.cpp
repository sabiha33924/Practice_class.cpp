#include <iostream>
using namespace std;
class Time
{
    int hours, minutes, seconds;
 public:
    void set_time(int hours,int minutes,int seconds);
    void get_time();   
};
int main()
{
    Time t;
    t.set_time(10,20,30);
    t.get_time();
    return 0;
}
void Time::set_time(int hours,int minutes,int seconds)
{
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}
void Time::get_time()
{
    cout << "Hours : " << this->hours << endl;
    cout << "Minutes : " << this->minutes << endl;
    cout << "Second : " << this->seconds << endl;
}