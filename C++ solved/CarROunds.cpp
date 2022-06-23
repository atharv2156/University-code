#include<iostream>
using namespace std;

int main(){

    int t;
    int n = 0;
    cin>>t;
    //N denotes numbre of friends a car have only four seats then how many cars required for n number of friends
    while(t--)
    {
        cin>>n;
         if (n % 4 == 0)
        {
            cout << n / 4 << endl;
        }
        else
        {
            cout << (n / 4)+1 << endl;
        }
    }
    

    return 0;
}