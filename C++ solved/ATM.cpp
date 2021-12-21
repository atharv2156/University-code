#include <iostream>
using namespace std;

int main()
{
    float amount, withdraw;
    cin >> amount;
    cout << "your balance is: " << amount << "$" << endl;

    cin >> withdraw;
    cout << "your withdraw amount: " << withdraw << "$" << endl;
    amount -= withdraw;
    cout << "0.50 tax is dudcted from you bank account: " << (float)amount - 0.50 << endl;

    return 0;
}