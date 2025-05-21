#include <stdio.h>
int func(int);
int Func(int num){
    if(num<4){
        return 0;
    }
    for(int i=2;i<=num/2;++i){
        if(func(i) && func(i-1)){
            return 1;
        }
    }
    return 0;
}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    int res=Func(num);
    printf("%d",res);
    return 0;
}
