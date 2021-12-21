#include<stdio.h>

int main(){

int num1 , num2 , num3 ;

printf("Enter the value of num 1\n");
scanf("%d",&num1);

printf("Enter the value of num 2\n");
scanf("%d",&num2);

printf("Enter the value of num 3\n");  
scanf("%d",&num3);

if(num1 > num2 && num1 > num3){
    printf("num1 is biggest of all");
}


else if(num2 > num1 && num2 > num3){
    printf("num2 is biggest of all");
}

else{
    printf("num3 is biggest of all");
}
return 0;
}