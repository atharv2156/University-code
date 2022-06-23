#include<iostream>
using namespace std;
int main(){
int k,w,n;
//wants to buy w bananas 
//he have n dollar
//k he have to pay for banana
cin>>k>>n>>w;
if(n>=w){
    cout<<n-w<<endl;
}
else{
    cout<<0<<endl;
}

 return 0;   
}
