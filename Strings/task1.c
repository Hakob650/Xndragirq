#include <stdio.h>
int func(char *str){
    int len=0;
    while(*str!='\0'){
        len++;
        str++;
    }
    return len;
}
int main(){
    char str[]="Hello World";
    int res=func(str);
    printf("%d",res);
    return 0;
}
        
