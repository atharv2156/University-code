#include <iostream>
using namespace std;
int main()
{
    cout << "enter your age to verify : ";
    int age;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;
    case 22:
        cout << "you are 22" << endl;
        break;
    default:
        cout << "no special case" << endl;
        break;
    }

    return 0;
}