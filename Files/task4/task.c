#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char *buf;
    long offset=0;
    size_t readsize=20;
    fp=fopen("example.txt","r");
    if(fp==NULL){
        perror("Failed to open file to read");
        return 1;
    }
    buf=(char*)malloc(readsize);
    if(buf==NULL){
        fclose(fp);
        return 1;
    }
    for(int i=0;i<2;++i){
        if(fseek(fp,offset,SEEK_SET)!=0){
            free(buf);
            fclose(fp);
            return 1;
        }
        size_t byteread=fread(buf,1,readsize,fp);
        buf[byteread]='\0';
        printf("Read %d:%s\n",i+1,buf);
    }
    free(buf);
    fclose(fp);
    return 0;
}
