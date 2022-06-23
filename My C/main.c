
#include<stdio.h>
//OS Experiment 5
void main(){
    int pid;
    pid = fork();
    if(pid < 0){
        printf("error");
    }
    else if (pid == 0)
    {
        printf("Its a child process: %d",getpid());
    }
    else{
        printf("Its a parent process: %d",getpid());
    }
return 0;
}