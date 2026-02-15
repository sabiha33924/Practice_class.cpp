#include <iostream>
using namespace std;
class Book
{
    double price;
public:
    string title;
    string author;
    void set_book(double price,string title,string author);
    void get_book();
};
int main()
{
    Book b;
    b.set_book(2000,"C++ programming language","dnbfbf");
    b.get_book();
    return 0;
}
void Book::set_book(double price,string title,string author)
{
    this->price = price;
    this->title = title;
    this->author = author;
}
void Book::get_book()
{
    cout << "Title : " << this->title << endl;
    cout << "Price : " << this->price << endl;
    cout << "Author : " << this->author<< endl;
}
