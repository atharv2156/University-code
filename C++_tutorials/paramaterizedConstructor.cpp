#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int , int);
    void printNumbers()
    {
        cout << "your numbers is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y) // parameterized constructor
{
    a = x;
    b = y;
    // cout << "this runs automatically"
} 

int main()
{
    // implicit call
    complex a(4, 5);
    a.printNumbers();

    // Explicit call
    complex b = complex(3, 5);
    b.printNumbers();

    return 0;
}