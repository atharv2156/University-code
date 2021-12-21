#include <stdio.h>
void swap(int *a)
{
  *a = 365;

}

int main()
{
    int x = 10;
    printf("the value a is %d \n", x);
    swap(&x);
    printf("the value a is %d ", x);

    return 0;
}   