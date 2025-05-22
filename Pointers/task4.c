#include <stdio.h>
char *mystrchr(const char *str,int ch){
    while(*str!='\0'){
        if(*str==(char)ch){ 
            return (char*)str;
        }
        str++;
    }
    if(ch=='\0'){
        return (char*)str;
    }
    return NULL;
}
int main(){
    const char *str="Hello World";
    char ch='W';
    char *res=mystrchr(str,ch);
    if(res){
        printf("char %c found at index: %ld\n",ch,res-str);
    }else{
        printf("char %c not found\n",ch);
    }
    return 0;
}
