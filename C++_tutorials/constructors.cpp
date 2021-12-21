#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    //! creating constructor
    /*conctructor is a special member funtion with same name as
    of the class. It is automatically invoked
    when ever the object is created
      it is used to initlized th objects of its class*/

    complex(void); //^constructor declaration
    void printNumbers()
    {
        cout << "your numbers is" << a << " + " << b << "i" << endl;
    }
};
complex::complex(void)
{ // default constructior
    a = 10;
    b = 6;
    cout << "this runs automatically"
}

int main()
{
    complex c;
    c.printNumbers();

    return 0;
}

/* //*Characteristic of Constructor
1. it should be declared in public section of class
2. They are automatically invoked whanever object is created
3. Thay cannot return values do not have return types
4. it can have dafault arguments
5. we cannot refer to their address
*/