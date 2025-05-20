#include <stdio.h>
int main(){
    int number;
    printf("Enter number");
    scanf("%d",&number);
    int n;
    printf("Enter index");
    scanf("%d",&n);
    int m=~(1<<n);
    int res=number&m;
    for(int i=sizeof(int)*8-1;i>=0;--i){
        printf("%d",(res>>i)&1);
    }
    return 0;
}
