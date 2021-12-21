// using class create the student database which contain the field :roll no , name ,SGPA for five student and display in sorted manner .Use insertion sort
#include <iostream>
#include<cstring>
using namespace std;
class StudentInfo
{
public:
    char name[30];
    int rollno;
    float sgpa;

    static void insertionSort(int name[]){
        int n = name.length;
        for (int j = 0; j < n; j++)
        {
            int key = name[j];
            int i = j - 1;
            i--;    
            while(i>=-1&&name[i]>=key){
                name[i+1] = name[i];
                i--;
            }
            name[i+1]= key;

        }
        
    }
    void getInfo()
    {
        cout << "Enter the name of Student: ";
        cin >> name;
        cout << "Enter the rollno of student: ";
        cin >> rollno;
        cout << "Enter the SGPA of student: ";
        cin >> sgpa;
    }
    void display()
    {
        cout << "name of student: " << name << endl;
        cout << "roll no of student: " << rollno << endl;
        cout << "SGPA: " << sgpa;
    }
};
/*
void insertionSort(StudentInfo s[20], int n)
{
    
    int j;
    StudentInfo key;
    for (int i = 1; i < n; i++)
    {
        key = s[i];
        j = i - 1;
        Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position 
        while (j >= 0 && strcmp(s[j].name, key.name) > 0)
        {
            s[j + 1] = s[j];
            j = j - 1;
        }
        s[j + 1] = key;
    }
}
*/
int main()
{
    StudentInfo s1, s2, s3, s4, s5;
    s1.getInfo();
    s1.display();
   s1.insertionSort(5);
    return 0;
}