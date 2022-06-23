#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll left[n], right[n];
        for (long long i = 0; i < n; i++)
        {

            cin >> left[i];
        }
        for (long long j = 0; j < n; j++)
        {

            cin >> right[j];
        }

        if (n == 1)
        {
            cout << '0' << endl;
        }
        else
        {
            long long ans = 0;

            for (int k = 1; k < n; k++)
            {

                ans += min(left[k], right[k - 1]);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
