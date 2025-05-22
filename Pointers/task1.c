#include <stdio.h>
#include <string.h>
int mystrstr(char *str1,char *str2){
    if(*str2=='\0'){
        return 0;
    }
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1<len2){
        return -1;
    }
    for(int i=0;i<len1-len2;++i){
        int j=0;
        while(j<len2 && str1[i+j]==str2[j]){
            ++j;
        }
        if(j==len2){
            return i;
        }
    }
    return -1;
}
void remove_newline(char *str){
    int len=strlen(str);
    if(len>0 && str[len-1]=='\n'){
        str[len-1]='\0';
    }
}
int main(){
    char str1[1000];
    char str2[1000];
    
    printf("Enter str1");
    fgets(str1,sizeof(str1),stdin);
    remove_newline(str1);
    
    printf("Enter str2");
    fgets(str2,sizeof(str2),stdin);
    remove_newline(str2);

    int res=mystrstr(str1,str2);
    if(res!=-1){
        printf("%d",res);
    }else{
        printf("Not found");
    }
    return 0;
}
            
