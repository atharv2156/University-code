#include <stdio.h>
#include<stdlib.h>
int main()
{

    int marks[6];

    for (int i; i < 6; i++)
    {
        printf("enter the marks\n");
        scanf("%d", &marks[i]);
    }
    for (int i; i < 6; i++)
    {
        printf(" %d is the marks is %d\n", i, marks[i]);
    }
    

    return 0;
}