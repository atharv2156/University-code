#include <iostream>
using namespace std;

class publication
{

    char title[10];
    float price;

public:
    void read()
    {
        cout << "\nEnter title of the publication:- ";
        cin >> title;
        cout << "\nEnter the price of publication:-";
        cin >> price;
    }

    void show()
    {
        cout << "Title is: " << title << endl;
        cout << "Price is: " << price << endl;
    }
};

class book : public publication
{
    int pageCount;

public:
    void read()
    {
        cout << "\nEnter the page count of book: ";
        cin >> pageCount;
    }
    void show()
    {
        cout << "page count of book is:" << pageCount << endl;
    }
};

class tape : public publication
{
    float playingTime;

public:
    void read()
    {
        cout << "\nEnter playing time in minutes: ";
        cin >> playingTime;
    }
    void show()
    {
        cout << "Playing time in minutes: " << playingTime << endl;
    }
};
int main()
{
    publication *ptr;
    publication p;
    p.read();
    p.show();

    book b;
    ptr = &b;
    ptr->read();
    ptr->show();

    tape t;
    ptr = &t;
    ptr->read();
    ptr->show();

    return 0;
}