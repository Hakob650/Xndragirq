#include <stdio.h>
#include <string.h>
void myStrcpy(char* dest,const char* src,int size){
	int i=0;
    while(i<size-1&&src[i]!='\0'){
        	dest[i]=src[i];
            i++;
    }dest[i]='\0';
}
int main(){
    int size=100;
    char dest[size];
    char src[size];
    printf("enter source ");
    fgets(src, sizeof(src), stdin);
    int len=strlen(src);
    if(len>0&&src[len-1]=='\n'){
        src[len-1]='\0';
    }
    printf("enter copy  size ");
    scanf("%d", &size);
    myStrcpy(dest, src, size);
    printf("copied string: \"%s\"\n", dest);
    return 0;
}
