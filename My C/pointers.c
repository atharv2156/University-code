#include<stdio.h>

int main(){

int a = 50;
int *ptr = &a;

int *ptrn = NULL;

printf("the address of null is %u\n",ptrn);

printf("the address of a is : %u\n",&a);
printf("the address of ptr is : %x\n",ptr);
printf("the address of *ptr is : %p\n",ptr);
printf("The value of a is : %d\n",a);


return 0;
}