#include<iostream>
using namespace std;
void main(){
    int pid;
    pid = fork();
    if(pid < 0){
        cout<<"error";
    }
    else if (pid == 0)
    {
        cout<<"Its child process"<<getpid();
    }
    else{
        cout<<"its a parent process: "<<getpid();
    }
return 0;
}