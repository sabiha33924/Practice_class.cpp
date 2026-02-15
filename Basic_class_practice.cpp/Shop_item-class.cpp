#include <iostream>
using namespace std;

class ShopItem
{
    float price;
    int quantity;

public:
    string itemName;

    void set_item(string name, float price, int quantity);
    void get_item();
    float total_cost();
};

int main()
{
    ShopItem s;

    s.set_item("School bag", 500, 12);
    s.get_item();

    return 0;
}

void ShopItem::set_item(string name, float price, int quantity)
{
    this->itemName = name;
    this->price = price;
    this->quantity = quantity;
}

float ShopItem::total_cost()
{
    return price * quantity;
}

void ShopItem::get_item()
{
    cout << "Item Name : " << this->itemName << endl;
    cout << "Price     : " << this->price << endl;
    cout << "Quantity  : " << this->quantity << endl;
    cout << "Total     : " << total_cost() << endl;
}