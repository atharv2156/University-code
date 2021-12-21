#include <iostream>
using namespace std;

class student
{
protected:
    int rollNum;

public:
    void getNum(int a)
    {
        rollNum = a;
    }
    void putNum(void)
    {
        cout << "Roll Number : " << rollNum;
    }
};

class test : public student
{
protected:
    float part1, part2;

public:
    void getMarks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void putMarks(void)
    {
        cout << "Marks Obtained : " << endl
             << "part1" << part1 << endl
             << "part2" << part2 << endl;
    }
};

class spots
{
protected:
    float score;

public:
    void getScore(float s)
    {
        score = s;
    }
    void putScore(void)
    {
        cout << "Sports Wt : " << score << endl;
    }
};

class result : public test, public sports
{
    float total;

public:
    void display(void);
} 
void result :: display(void)
{
    total = part1 + part2 + score;
    putNum();
    putMarks();
    putScore();
    cout << "Total score :" << total << endl;
}

int main()
{
    result student_1;
    student_1.getNum(12 ,34);
    student_1.getMarks(27.5,33.0);
    student_1.getScore(6.0);
    student_1.display();
    return 0;
}