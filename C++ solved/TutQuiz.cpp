// Create a funtion which takes 2 point object and computers the computes the distance between those point
#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "the point is (" << x << "," << y << ")" << endl;
    }
    void distance(point p1, point p2)
    {
        float dist = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
        cout << "the distance between points are: " << dist << endl;
    }
};

int main()
{
    point p(2, 4);
    point q(3, 5);
    p.display();
    q.display();

    distance(p, q);

    return 0;
}