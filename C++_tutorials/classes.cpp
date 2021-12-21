#include <iostream>
using namespace std;

class memes
{

private:
    int a, b;

public:
    int c, d;
    void setData(int a1, int b1); //! declaration
    void geData()
    {
        cout << "the value is: " << a << endl;
        cout << "the value is: " << b << endl;
        cout << "the value is: " << c << endl;
        cout << "the value is: " << d << endl;

    }
};

void memes ::setData(int a1, int b1)
{
    a = a1;
    b = b1;
  
}

int main()
{

    memes harry;
    // harry.a = 3423;//~cannot access bcz itss a private --> it can be accessed by function of its class
    harry.c = 35;
    harry.d = 25;
    harry.setData(1, 2);
    harry.geData();
    return 0;
}