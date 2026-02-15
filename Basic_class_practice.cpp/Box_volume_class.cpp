#include <iostream>
using namespace std;
class Box
{
     float length, width, height;

public:
    void set_box(float length, float width, float height);
    void get_box();
    float volume();
};
int main()
{
    Box b;
    b.set_box(7,3,2);
    b.get_box();
    return 0;
}
void Box::set_box(float length, float width, float height)
{
    this->length = length;
    this->width = width;
    this->height = height;
}

float Box::volume()
{
    return length * width * height;
}

void Box::get_box()
{
    cout << "Length : " << this->length << endl;
    cout << "Width  : " << this->width << endl;
    cout << "Height : " << this->height << endl;
    cout << "Volume : " << volume() << endl;
}