#include <stdio.h>
int func(int num){
    int original=num;
    int sum=0;
    int digit,count=0;
    int tmp=num;
    while(tmp!=0){
        tmp/=10;
        count++;
    }
    tmp=num;
    while(tmp!=0){
        digit=tmp%10;
        int res=1;
        for(int i=0;i<count;++i){
            res*=digit;
        }
        sum+=res;
        tmp/=10;
    }
    if(sum==original){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    int res=func(num);
    printf("%d",res);
    return 0;
}
