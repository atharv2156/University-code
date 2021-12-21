#include<stdio.h>

int main(){
int age;

printf("enter your age\n");
 
scanf("%d",age);
printf("you have enterd your age is %d\n",age);

if(age >= 18){
printf("you can vote or drive\n");
}
else{
    printf("you cannot vote or drive\n");
}

return 0;
}