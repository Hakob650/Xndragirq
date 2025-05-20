#include <stdio.h>
#include <limits.h>
int my_atoi(const char *str){
    int res=0;
    int sign=1;
    int i=0;
    while(str[i]==' ' || str[i]=='\t'){
        i++;
    }
    if(str[i]=='-'){
        sign=-1;
        i++;
    }else if(str[i]=='+'){
        i++;
    }
    while(str[i]>'0' && str[i]<'9'){
        int d=str[i]-'0';
        if(res>(INT_MAX-d)/10){
            return (sign==1) ? INT_MAX : INT_MIN;
        }res=res*10+d;
        i++;
    }
    return sign*res;
}
