#include<iostream>
using namespace std;

int main(){
    //in x unit task is supposed to be finished
    //but it finishes in m*x units
    //he delays the work by max d units 
    //x , m , d is given to find maximum time taken by chef to complete

    int t , x , m , d;
    cin>>t;
    while (t--)
    {
        cin>>x>>m>>d;
        if(m*x > x+d){
          cout<<x+d<<endl;
        }
        else if(m*x <= x+d){
           cout<<m*x<<endl;
        }
    }
    // by this we can get excess time utilized by chef

    return 0;
}