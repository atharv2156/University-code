#include <iostream>
using namespace std;

int main()
{
    //when it sees i = 7 is break it will exit the code
    /*
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        if (i == 7)
        {
            break;
        }
    }
    */
//when it will sees j = 8 continue  =it will ignore 8 and continue itrating
    for (int j = 0; j < 20; j++)
    {
        if (j == 8)
        {
            continue;
        }
        cout << j << endl;
    }
    return 0;
}

