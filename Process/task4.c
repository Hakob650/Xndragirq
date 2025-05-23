#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
    pid_t pid1,pid2;
    pid1=fork();
    if(pid1<0){
        printf("fork failed");
        exit(1);
    }else if(pid1==0){
        printf("Child1 Pid %d :directories content\n",getpid());
        execlp("ls","ls","-l",NULL);
        printf("exec(ls) failure");
        exit(1);
    }else{
        waitpid(pid1,NULL,0);
        pid2=fork();
        if(pid2<0){
            printf("fork failed");
            execlp("pwd","pwd",NULL);
            printf("exelp(pwd) failed");
            exit(1);
        }else{
            waitpid(pid2,NULL,0);
            printf("two child processes are terminated");
        }
    }return 0;
}