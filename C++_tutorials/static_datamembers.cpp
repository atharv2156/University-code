#include <iostream>
using namespace std;

class employee
{

    static int count;
    int id;

public:
    void setData(void)
    {
        cout << "enter the id of employee:- " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employee is:- " << id << "  this is employee no:- " << count << endl;
    }

    static void getcount(void)
    {
        cout << "The value of count is:- " << count << endl;
    }
};

int employee::count;

int main()
{
    employee atharv, harry, rohan;

    atharv.setData();
    atharv.getData();
    employee::getcount();

    harry.setData();
    harry.getData();
    employee::getcount();

    rohan.setData();
    rohan.getData();
    employee::getcount();

    return 0;
}