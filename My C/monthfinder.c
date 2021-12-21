#include <stdio.h>

int main()
{
    int month;
    printf("enter the num 1 to 12 to get month\n");
    scanf("%d", &month);

    if (month == 1)
    {
        printf("january\n");
    }
    if (month == 2)
    {
        printf("February\n");
    }
    if (month == 3)
    {
        printf("march\n");
    }
    if (month == 4)
    {
        printf("April\n");
    }
    if (month == 5)
    {
        printf("may\n");
    }
    if (month == 6)
    {
        printf("june\n");
    }
    if (month == 7)
    {
        printf("july\n");
    }
    if (month == 8)
    {
        printf("august\n");
    }
    if (month == 9)
    {
        printf("septmber\n");
    }
    if (month == 10)
    {
        printf("octomber\n");
    }
    if (month == 11)
    {
        printf("november\n");
    }
    if (month == 12)
    {
        printf("december\n");
    }
    if (month >= 13)
    {
        printf("Fuck off\n");
    }
    

    return 0;
}