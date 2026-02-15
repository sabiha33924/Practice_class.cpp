#include <iostream>
using namespace std;

class Laptop
{
    float price;
    int ram;
    int genaration;

public:
    string brand;

    void set_laptop(string brand, float price, int ram, int genaration);
    void get_laptop();
    void check_ram();
};

int main()
{
    Laptop l;

    l.set_laptop("Lenovo", 90000, 8, 10);
    l.get_laptop();

    return 0;
}

void Laptop::set_laptop(string brand, float price, int ram, int genaration)
{
    this->brand = brand;
    this->price = price;
    this->ram = ram;
    this->genaration = genaration;
}

void Laptop::check_ram()
{
    if (ram >= 8)
        cout << "Good RAM " << endl;
    else
        cout << "Low RAM " << endl;
}

void Laptop::get_laptop()
{
    cout << "Brand : " << this->brand << endl;
    cout << "Price : " << this->price << endl;
    cout << "RAM   : " << this->ram << " GB" << endl;
    cout << "Genaration : " << this->genaration << endl;
    check_ram();
}

