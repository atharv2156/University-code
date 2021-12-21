#include <iostream>
using namespace std;
int main()
{

    cout << "control structure" << endl;
    cout << "enter the age to varify : ";
    int age;
    cin >> age;
    if (age < 18 && age > 0)
    {
        cout << "you cannot come to my party";
    }
    else if (age < 1)

    {
        cout << "you are not yet born";
    }
    else if (age == 18)
    {
        cout << "you are still kid" << endl;
    }
    else
    {
        cout << "you can join the party" << endl;
    }
    return 0;
}