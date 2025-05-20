#include <stdio.h>
int func(int num,int i,int j){
    int bit_i=(num>>i)&1;
    int bit_j=(num>>j)&1;
    if(bit_i!=bit_j){
        num^=(1<<i);
        num^=(1<<j);
    }
    return num;
}
int main(){
    int number;
    printf("Enter number");
    scanf("%d",&number);
    int i;
    printf("Enter i");
    scanf("%d",&i);
    int j;
    printf("Enter j");
    scanf("%d",&j);
    int res=func(number,i,j);
    printf("%d",res);
    return 0;
}
