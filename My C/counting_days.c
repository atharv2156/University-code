#include<stdio.h>

int main(){
int year , weeks , days = 1329 ;
year = days/365;

weeks = (days % 365)/7;

days = days- ((year*365) + (weeks*7));

printf("days in years : %f\n",year);

printf("days in weeks : %f\n",weeks);

printf("remining days : %f\n",days);

return 0;
}