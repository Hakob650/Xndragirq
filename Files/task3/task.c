#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char *buf;
    int filesize;
    size_t readsize;
    int count=0;
    fp=fopen("example.txt","r");
    if(fp==NULL){
        perror("Failed to open file for read");
        return 1;
    }
    fseek(fp,0,SEEK_END);
    filesize=ftell(fp);
    rewind(fp);
    buf=(char*)malloc(filesize+1);
    if(buf==NULL){
        fclose(fp);
        return 1;
    }
    readsize=fread(buf,1,readsize,fp);
    buf[readsize]='\0';
    fclose(fp);
    for(size_t i=0;i<readsize;++i){
        if(buf[i]>='0' && buf[i]<='9'){
            buf[count++]=buf[i];
        }
    }
    buf[count]='\0';
    fp=fopen("example.txt","w");
    if(fp==NULL){
        perror("Failed to open file for write");
        free(buf);
        return 1;
    }
    for(int i=1;i<=100;++i){
        fprintf(fp,"%d",i);
    }
    printf("%d",count);
    fclose(fp);
    free(buf);
    return 0;
}
