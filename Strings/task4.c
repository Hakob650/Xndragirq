#include <stdio.h>
#include <string.h>
void func(char *str){
            if(str[0]>='a' && str[0]<='z'){
                str[0]-=32;
            }
        for(int i=1;str[i]!='\0';++i){
            if(str[i]>='A' && str[i]<='Z'){
                str[i]+=32;
            }
        }
}

int main(){
    char str[100];
    printf("Enter string");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    func(str);
    printf("Modified string: %s\n",str);
    return 0;
}

