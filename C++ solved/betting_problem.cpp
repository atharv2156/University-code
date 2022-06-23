#include <iostream>
using namespace std;

int main()
{

    int t, a, b, c;
    // if problem A is hardest then its draw
    // if problem B is hardest then bob wins
    // if problem C is hardest then alice wins
    cin >> t;
    while (t--)
    {

        cin >> a >> b >> c;
        if (a < b && a < c)
        {
            cout << "Draw" << endl;
        }
        else if (b < a && b < c)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}