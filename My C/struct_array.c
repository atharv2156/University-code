#include<stdio.h>

struct array{

int employeeid;
    
};


int main(){

struct array google[50];

google[31].employeeid = 310;

printf("%d",google[31].employeeid);


return 0;
}