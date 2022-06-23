#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int N ,X ,T;
      int a, b;
        a = 3*X;
        b = (N-X)*1;
    for(int i = 0;i < n ; i++){
        
        cin>>N>>X>>T;
    }

        if((a-b)>=T)
        {
        cout<<"PASS"<<endl;
        }
        else{
        cout<<"FAIL"<<endl;
        }



    return 0;
}