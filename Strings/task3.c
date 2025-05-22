#include <stdio.h>
#include <string.h>
void func(char *str){
    int size=strlen(str);
    for(int i=0;str[i]!='\0';++i){
        if(str[i]>='a' && str[i]<='z'){
            str[i]&=~32;
        }
    }
}
int main(){
    char str[100];
    printf("Enter string");
    fgets(str,sizeof(str),stdin);
    func(str);
    printf("Uppercase string: %s\n",str);
    return 0;
}
    
    
