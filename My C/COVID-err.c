#include<stdio.h>
#include<conio.h>
void main(){
    int age;
    clrscr();
    
     printf("enter the age");
     scanf("%d",&age);

     if(age > 45){
         printf("gett vaccine");
     }
     else{
         printf("get out");
     }
     getch();
}