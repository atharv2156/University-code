
#include<iostream>
using namespace std;
int main()
{

  int n, a, ans = 0;
  cin>>n>>a;
  int arr[a];

  for (int i = 0; i < n; i++)
  {
    int t;
    cin>>t;
    if (arr[a]%t  == 0)
    {
      ans++;
      
    }
  }
  cout<<ans;
  return 0;
}



