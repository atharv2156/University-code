#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumCOM(complex o1, complex o2);
    void printNumbers()
    {
        cout << "your numbers is" << a << " + " << b << "i" << endl;
    }
};
//

complex sumCOM(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 5);
    c2.setNumber(3, 4);
    c1.printNumbers();
    c2.printNumbers();
    sum = sumCOM(c1, c2);
    sum.printNumbers();
    return 0;
}

/* properties of friend function
*  not in the scope of class
*  since it is not int the class , it cannot be called object of class
*  can be invoked without the help of any object
*  usually contains the object as arguments
*  can be declared inside public or private section of the class 
*  it cannot access the membres directly by their names and need object_name.member_name to access any member
*/