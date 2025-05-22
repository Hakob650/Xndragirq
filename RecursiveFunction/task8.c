#include <stdio.h>
#include <stdlib.h>
char func(const char *ptr){
    if(*ptr=='\0'){
        return '\0';
    }
    if(*ptr>'A' && *ptr<'Z'){
        return *ptr;
    }
    return func(ptr+1);
}
int main(){ 
    int size;
    printf("Enter size");
    scanf("%d",&size);
    char *ptr=(char*)malloc((size+1)*sizeof(char));
    if(ptr==NULL){
        return 1;
    }
    printf("Enter string");
    scanf("%s",ptr);
    char res=func(ptr);
    printf("%c",res);
    return 0;
}
    
