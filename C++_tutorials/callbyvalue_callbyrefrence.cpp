#include<iostream>
using namespace std;
void swap(int a , int b){
    //this will not work
    //swapping values of a and b with each others
    int temp = a;
    a = b;
    b = temp;

}

//call by refrence using values
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapbyRefrence(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int x = 6 , y = 8;
    cout<<"the value of a is : "<<x<<"the value of b is : "<<y<<endl;
    // swap(x,y);
    // swapPointer(&x, &y);
       swapbyRefrence(x, y);
    cout<<"the value of a is : "<<x<<"the value of b is : "<<y<<endl;
    return 0;
}