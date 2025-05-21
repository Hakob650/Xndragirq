#include <stdio.h>
int func(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;++i){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int number;
    printf("Enter number");
    scanf("%d",&number);
    int res=func(number);
    printf("%d",res);
    return 0;
}
