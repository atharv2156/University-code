#include<iostream>
using namespace std;
int sum(int a , int b , int c){
    cout<<"using three arguments"<<endl;
    return a + b + c;
}
int sum(int a , int b){
    cout<<"using two arguments"<<endl;
    return a + b ;
}
int volume(double r , int h){
    return(3.14*r*r*h);
}

int volume(int a){
    return a*a*a;
}

int volume(int l , int b , int h){
    return(l*b*h);
}

int main(){

    cout<<"the of two numbers is:- "<<sum(2,5)<<endl;
    cout<<"the of three numbers is:- "<<sum(2,5,4)<<endl;
    cout<<"the volume of cubiod:- "<<volume(2,4,3)<<endl;
    cout<<"the volume of cyliner:- "<<volume(5,4)<<endl;
    cout<<"the volume of sides:- "<<volume(6)<<endl;
    return 0;
}