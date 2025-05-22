#include <stdio.h>
int func(int num){
    if(num<10){
        return num;
    }
    return (num%10)*func(num/10);
}
int main(){
    int num;
    printf("Enter num");
    scanf("%d",&num);
    int res=func(num);
    printf("%d",res);
    return 0;
}
