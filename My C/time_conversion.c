#include<stdio.h>

int main(){

int hr , min , sec , inputsec;

printf("Enter the secs to convert\n");
scanf("%d",&inputsec);

hr = (inputsec/3600);

min = (inputsec -(3600*hr))/60;

sec = (inputsec -(3600*hr)-(min*60));

printf("the converted value is hr/min/sec is : %d/%d/%d \n",hr , min , sec);

return 0;
}