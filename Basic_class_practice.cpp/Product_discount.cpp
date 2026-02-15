#include <iostream>
using namespace std;

class Product
{
    float price;
    float discount;
public:
    string name;
    void set_product(string name, float price, float discount);
    void get_product();
    float final_price();
};
int main()
{
    Product p;
    p.set_product("Dress", 1000, 50);
    p.get_product();
    return 0;
}
void Product::set_product(string name, float price, float discount)
{
    this->name = name;
    this->price = price;
    this->discount = discount;
}
float Product::final_price()
{
    return price - (price * discount / 100);
}
void Product::get_product()
{
    cout << "Product  : " << this->name << endl;
    cout << "Price    : " << this->price << endl;
    cout << "Discount : " << this->discount << "%" << endl;
    cout << "Final    : " << final_price() << endl;
}
