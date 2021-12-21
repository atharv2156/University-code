#include <iostream>
using namespace std;
//regular function
// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

//function prototype
int secondsum(int a , int b);

//void function
void codemsg(){
    cout<<"\ncode runs perfectly"<<endl;
}

int main()
{
    int num1, num2;
    cout << "Enter the first num" << endl;
    cin >> num1;
    cout << "Enter the second num" << endl;
    cin >> num2;
    cout << "the sum is : " << secondsum(num2, num2);
    // cout << "the sum is : " << sum(num2, num2);
    codemsg();

    return 0;
}


int secondsum(int a, int b)
{
    int c = a + b;
    return c;
}