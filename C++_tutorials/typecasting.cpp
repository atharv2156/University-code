#include<iostream>
using namespace std;
//this is global
// int a = 20; 
int main(){
    // int a = 30;
    // cout<<"this will print local value :"<< a ;
    // cout<<"\nthis will print global value :"<< ::a<<endl ; 


    // // 34.4 this will by default double value, to change this we have tp ::;
    // float b =  3.14f;
    // long double c = 3.14l;//it will allow capital also
    // cout<<"the size of "<<sizeof(34.4)<<endl;
    // cout<<"the size of "<<sizeof(34.4f)<<endl;
    // cout<<"the size of "<<sizeof(34.4F)<<endl;
    // cout<<"the size of "<<sizeof(34.4l)<<endl;
    // cout<<"the size of "<<sizeof(34.4L)<<endl;
    // cout<<"the value of d is: "<<b<<endl<<"the value of c is: "<<c; 


//******************refrence variable****************

    float var = 455;
    float & var2 = var; 
    cout<<var<<endl;
    cout<<var2<<endl;

    // ************typecast*****************
    int type = 334.657;
    float second = 24.34;
    cout<<"value of type after typecasting : "<<(float)type<<endl;
    cout<<"value of type after typecasting : "<<float(type)<<endl;

    cout<<"value of int typecasting : "<<int(second)<<endl;


    return 0;
}