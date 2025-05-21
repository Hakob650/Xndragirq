#include <stdio.h>
int power(int num,int exp){
    int res=1;
    if(exp<0){
        return 0;
    }
    for(int i=0;i<exp;++i){
        res*=num;
    }
    return res;
}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    int exp;
    printf("Enter exponent");
    scanf("%d",&exp);
    int res=power(num,exp);
    printf("%d",res);
    return 0;
}
