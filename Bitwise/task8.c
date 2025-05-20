#include <stdio.h>
int func(int num,int n){
    return num^(1<<n);
}
int main(){
    int number;
    printf("Enter number");
    scanf("%d",&number);
    int n;
    printf("Enter index");
    scanf("%d",&n);
    int res=func(number,n);
    printf("%d",res);
    return 0;
}
