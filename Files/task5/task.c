#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp1,*fp2;
    long filesize;
    char *buf;
    fp1=fopen("a.txt","r");
    if(fp1==NULL){
        perror("Failed to open file for write");
        return 1;
    }
    fseek(fp1,0,SEEK_END);
    filesize=ftell(fp1);
    rewind(fp1);
    buf=(char*)malloc(filesize+1);
    if(buf==NULL){
        fclose(fp1);
        return 1;
    }
    fread(buf,1,filesize,fp1);
    buf[filesize]='\0';
    fclose(fp1);
    for(int i=0,j=filesize-1;i<j;++i,--j){  
        char tmp=buf[i];
        buf[i]=buf[j];
        buf[j]=tmp;
    }
    fp2=fopen("b.txt","w");
    if(fp2==NULL){
        perror("Failed to open file to write");
        return 1;
    }
    fwrite(buf,1,filesize,fp2);
    printf("%s\n",buf);
    fclose(fp2);
    free(buf);
    return 0;
}
