#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n, a;
    cin >> n >> a;
    int *arr[n];
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        arr[i] = new int[s];
        for (int j = 0; j < s; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        int r, c;
        cin >> r;
        cin >> c;
        cout << arr[r][c] << endl;
    }
    return 0;
}