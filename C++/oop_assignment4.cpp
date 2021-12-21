#include <iostream>
using namespace std;
class stud
{
    int totalstd, code;

private:
    char name[20], add[20];
    int pincode;

public:
    int rolln;
    stud() // hear i have used defult constructor
    {
        cout << "\ndefult constructor for  Student Details" << endl;
    };
    stud(int i);
    stud(float j, float k);
    stud(const stud &s1); // hear i am using this to copy valus fo s1 which is stud (float j,float k);
                          // ~stud();
    void read();
    void disp();    // i will use it for  displaying the student information
    void display(); // i will use this display function for  copy constructor
};
stud ::stud(int i) //hear i am using parameterized constructor
{
    cout << "you can enter only " << i << " student data\n";
};
stud ::stud(float j, float k)
{
    code = j;
    totalstd = k;
}
void stud ::read()
{
    cout << "\nEnter the student Name :: ";
    cin >> name;
    cout << "\nEnter the student roll no :: ";
    cin >> rolln;
    cout << "\nEnter the student address :: ";
    cin >> add;
    cout << "\nEnter the pincode :: ";
    cin >> pincode;
}

stud ::stud(const stud &s1) // hear i am using copy constructor which is s2
{
    code = s1.code;
    totalstd = s1.totalstd;
}
void stud ::display()
{
    cout << "you can enter only " << code << " student data\n";
    cout << "total no of students are :- " << totalstd << "\n";
}
void stud ::disp()
{
    cout << "\nThe Entered Student Details are shown below ::---------- \n";
    cout << "\nStudent Name :: " << name << endl;
    cout << "\nRoll no   is :: " << rolln << endl;
    cout << "\nAddress is :: " << add << endl;
    cout << "\npincode is :: " << pincode << "\n\n";
}
//stud :: ~stud()
//{
//        cout<<"\n\nStudent Detail is Closed............. it is a distructor\n";
//}

int main(void)
{
    stud();
    cout << "\nobject s as a defult constructer if we use the stud() only without any argument\n\n";
    stud s = stud(1);
    cout << "\nobject s hear is paramaterized constructor\n\n";
    s.read();
    s.disp();
    stud s1(2, 125);
    s1.display();
    cout << "\nobject s2  as a copy constructer of s1\n\n";
    stud s2(s1);
    s2.display();
    //s.~stud();
    return 0;
}