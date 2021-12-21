#include <stdio.h>
int main()
{

    void printvar(char var[])
    {
        int i;
        while (var[i] == '\0')
        {

            printf("%c", var[i]);
            i++;
        }
    }

    char var[] = "atharv";
    printvar(var);

    return 0;
}