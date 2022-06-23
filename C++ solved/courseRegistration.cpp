#include <iostream>
using namespace std;

int main()
{

    // N  friends who wish to enroll in a course together.

    // The course has a maximum capacity of M students that can register for it.

    // there are K other students who have already enrolled in the course

    // T in no of test cases

    int t, n, k, m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>m>>k;
        if(n+k>m){
            cout<<"No"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }

    return 0;
}