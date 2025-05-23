#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
        pid_t pid=fork();
        if(pid<0){
            printf("fork failed");
            return 0;
        }else if(pid==0){
            printf("Child Process: Pid->%d,shows the content of the current directory:\n",pid);
            execlp("ls","ls","-l",NULL);
            printf("execlp failed");
            exit(1);
        }else{
            int status;
            wait(&status);
            printf("Child process is terminated\n");
        }
        return 0;
}

