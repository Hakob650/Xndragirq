#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char buf[100];
    fp=fopen("example.txt","w");
    if(fp==NULL){
        perror("Failed to open file to write");
        return 1;
    }
    fprintf(fp,"this is an example text in file");
    fclose(fp);
    fp=fopen("example.txt","r");
    if(fp==NULL){
        perror("Failed to open file to write");
        return 1;
    }
    while(fgets(buf,sizeof(buf),fp)!=NULL){
        printf("%s",buf);
    }
    fclose(fp);
    return 0;
}
