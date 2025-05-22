#include <stdio.h>
#include <string.h>
int func(char *str){
    for(int i=0;str[i]!='\0';++i){
        if(str[i]>='0' && str[i]<='9'){
            return i;
        }
    }
    return -1;
}
int main(){
    char str[100];
    printf("Enter string");
    fgets(str,sizeof(str),stdin);
    int res=func(str);
    printf("%d",res);
    return 0;
}
