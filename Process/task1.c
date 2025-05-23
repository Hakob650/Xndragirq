#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
    pid_t pid=fork();
    if(pid<0){
        printf("Fork failed");
        exit(1);
    }else if(pid==0){
        printf("My Pid=%d,Parent Pid=%d\n",getpid(),getppid());
        exit(5);
    }else{
        int status;
        printf("My Pid=%d,Child Pid=%d\n",getpid(),pid);
        waitpid(pid,&status,0);
        if(WIFEXITED(status)){
            printf("Child exited normally with status: %d\n",WEXITSTATUS(status));
        }else if(WIFSIGNALED(status)){
            printf("Child exited by a signal %d\n",WTERMSIG(status));
        }else{
            printf("Child exited not normally\n");
        }
    }return 0;
}