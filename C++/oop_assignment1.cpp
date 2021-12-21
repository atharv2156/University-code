// #include <iostream>
// #include <math.h>
// using namespace std;
// float areaTringle(float a, float b, float c)
// {
// }
// float areaCircle(float r)
// {
//
// }

// int main()
// {
//     float a, b, c, r;
//     cout << "enter area radius of circle\n";
//     cin>>r;
//     cout << "Enter sides of a triangle: ";
//     cin >> a >> b >> c;
//     cout << endl
//          << "Area of triangle is\n"
//          << areaTringle(a, b, c);
//     cout << "\narea of circle is\n"
//          << areaCircle(r);
//     return 0;
// }

#include <iostream>
#include<math.h>
using namespace std;


int area(float r)
{
     float circle = 3.14 * r * r;
     return circle;
}

int area(float a , float b , float c){

    float s = (a + b + c) / 2.0;
    float ar = sqrt(s * (s - a) * (s - b) * (s - c));
    return ar;
}
int main()
{
    float r;
    float a , b  ,c;

  cout<<"enter the value of radius"<<endl;
    cin >> r ;
    cout<<"enter the value of sides"<<endl;
    cin>>a>>b>>c;
    area(r);
    area(a , b , c);
    cout << endl<< "end";
    return 0;
}
