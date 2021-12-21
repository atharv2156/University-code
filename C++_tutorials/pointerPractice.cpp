#include<iostream>
using namespace std;

int main(){

    int target = 2002;
    int *ptr = &target;
    cout<<"printing value of ptr:- "<<(ptr)<<endl;
    cout<<"value using & oprateor:- "<<(&ptr)<<endl;
    cout<<"value using * oprator:- "<<(*ptr)<<endl;
    cout<<"address of target using function:- "<<addressof(target)<<endl;
    cout<<"address of ptr using function:- "<<addressof(ptr)<<endl;
    
int a ,b;
int *p;
a = 10;
p = &a;
b = *p;

cout<<a<<endl;
cout<<b<<endl;
cout<<p<<endl;


    return 0;
}