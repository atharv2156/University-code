#include<iostream>
using namespace std;
/*
?it reduces the output time 
^we cannot use on big functions
!not recommended on recursion*/
inline int product(int a,int b){
    return a*b;
}
//~value will be saved
//*value will be saved
//&static int means = one time initlization :- static int a = 0;
int main(){

    int a , b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b"<<product(a,b);



    return 0;
}