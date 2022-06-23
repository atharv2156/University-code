
#include<iostream>
using namespace std;

int main(){
    int testcases;
    cin>>testcases;
    int x ,y ,z;
    //x  is total points earned in games
    //y total points to qaulify game
    //z is currently game left

    for (int i = 0; i < testcases; i++)
    {
        cin>>x>>y>>z;
        int c = x+2*z;
        if(c > y){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,t,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(x+2*z >= y){
	        cout<<"YES\n";
	        }
	    else{
	        cout<<"NO\n";
	    }
	}
	
	return 0;
}

*/