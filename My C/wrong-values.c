#include<stdio.h>

int main(){
int p , q , r , s;

printf("enter the value of intege\n");
scanf("%d",&p);
printf("enter the value of integer\n");
scanf("%d",&q);
printf("enter the value of integer\n");
scanf("%d",&r);
printf("enter the value of integer\n");
scanf("%d",&s);


if((q > r) && (s > p) && ((r+s) > (p+q)) && (r > 0) && (s > 0) && (p%2 == 0)){
		printf("\nCorrect values\n");
	} 

	else{
		printf("\nWrong values\n");
    }

return 0;
}