#include<stdio.h>

int main(){
int math , science;
printf("enter the score of math\n");
scanf("%d",&math);  
printf("Enter the score of science\n");
scanf("%d",&science);

if (math >= 45 && science>=45)
{
    printf("you scored good you passed and you get a gift");
}
else if (math>=30 && science>=30)
{
    printf("you pass you did not get gift");
}
else if(math<=30 && science>=30){
    printf("you passed in science but failed in maths");
}
else if(math>=30 && science<=30){
    printf("you passed in maths but failed int scince");
}
else{
    printf("you fail!!");
}

return 0;
}