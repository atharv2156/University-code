#include <iostream>
using namespace std;

struct employee
{
    int ID;
    char namecode;
    float salary;
} emp; //<--this is typedef we can use insted of employee


//UNIONS
union money
{
    int rice;
    char car;
    float pounds;
};

//ENUMS
int main()
{

    struct employee harry;
    harry.ID = 20;
    harry.namecode = 'H';
    harry.salary = 20000.20;

    // cout << "the salary of harry :- " << harry.salary << endl;
    // cout << "the id of harry is :- " <<harry.ID << endl;
    // cout << "the of code of agent harry is:- " <<harry.namecode << endl;

    //UNIONS
    union money m1;
    m1.rice = 23;
    m1.car = 'c';
    // cout << m1.rice << endl;
    // cout << m1.car << endl;


//ENUMD
    enum Meal{breakfast , lunch , dinner};
    // cout<< breakfast<<endl;
    // cout<< lunch<<endl;
    // cout<< dinner<<endl;

    Meal M1 = lunch;
    // cout<< M1 << endl;

    return 0;
}