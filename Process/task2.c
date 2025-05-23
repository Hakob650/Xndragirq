#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    pid_t pid[3];
    for(int i=0;i<3;++i){
        pid[i]=fork();
        if(pid[i]==0){
            if(i==0){
                double res=log2(num);
                printf("Child1 Pid=%d,log2(%d)=%f\n",getpid(),num,res);
            }else if(i==1){
                unsigned long long fact=1;
                for(int j=1;j<=num;++j){
                    fact*=j;
                }
            printf("Child2 Pid=%d,factorial of %d=%llu\n",getpid(),num,fact);
            }else{
                int cube=num*num*num;
                printf("Child3 Pid=%d,cube of %d=%d\n",getpid(),num,cube);
            }
            exit(0);
        }
    }
    int status;
    pid_t f_pid=wait(&status);
    printf("First terminated process Pid: %d\n",f_pid);
    for(int i=0;i<3;++i){
        if(pid[i]!=f_pid){
            kill(pid[i],SIGKILL);
            printf("Process is killed,Pid: %d\n",pid[i]);
        }
    }
    while(wait(NULL)>0);
    return 0;
}