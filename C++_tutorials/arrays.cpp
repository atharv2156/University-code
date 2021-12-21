//collection of items of similar datatype
#include <iostream>
using namespace std;

int main()
{

    int marks[4] = {32, 34, 43, 29};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int mathsMark[4];
    mathsMark[0] = 32;
    mathsMark[1] = 42;
    mathsMark[2] = 36;
    mathsMark[3] = 34;

    cout << mathsMark[0] << endl;
    cout << mathsMark[1] << endl;
    cout << mathsMark[2] << endl;
    cout << mathsMark[3] << endl;

    // y0u can change value of array item
    cout << "changed value" << endl;
    marks[4] = 234;
    cout << marks[4] << endl;

    //printing values of array by loop
    for (int i; i < 4; i++)
    {
        cout << "the value of marks by loop" << marks[i] << endl;
    }

    //pointer to array 
    int *p = marks;

    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"the value of marks[0] is "<<*p<<endl;
    // cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"the value of marks[2] is "<<*(p+1)<<endl;
    // cout<<"the value of marks[3] is "<<*(p+3)<<endl;
    // cout<<"the value of marks[4] is "<<*(p+4);
    // cout<<"the value of marks[5] is "<<*(p+5);
    // cout<<"the value of marks[6] is "<<*(p+6);
    // cout<<"the value of marks[7] is "<<*(p+7);


    return 0;
}