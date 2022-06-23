#include <iostream>
using namespace std;

int main()
{

    int t, even, odd;
    cin >> t;
    even = even % 2 == 0;
    odd = odd % 2 > 0;
    while (t--)
    {
        cin >> even >> odd;
        if ((even, odd) && (odd, even))
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes";
        }
    }

    return 0;
}