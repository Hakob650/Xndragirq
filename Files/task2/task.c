#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    long filesize;
    char *buf;
    size_t readsize;
    fp=fopen("example.txt","r");
    if(fp==NULL){
        perror("Failed to open file for write");
        return 1;
    }
    fseek(fp,0,SEEK_END);
    filesize=ftell(fp);
    rewind(fp);
    buf=(char*)malloc((filesize+1)*sizeof(int));
    if(buf==NULL){  
        fclose(fp);
        return 1;
    }
    readsize=fread(buf,1,filesize,fp);
    buf[readsize]='\0';
    fclose(fp);
    for(size_t i=0;i<readsize;++i){
        buf[i]|=32;
    }
    fp=fopen("example.txt","w");
    fwrite(buf,1,readsize,fp);
    fclose(fp);
    free(buf);
    printf("The content of the file is converted to lowercase");
    return 0;
}
