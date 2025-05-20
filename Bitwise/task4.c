#include <stdio.h>
int main(){
    int number=0;
    int count=0;
    printf("Enter Number");
    scanf("%d",&number);
    int mask=1;
    while(number>0){
        count+=number&1;
        number>>=1;
    }
    if(count%2==0){
        printf("Count of 1's  is even");
    }else{
        printf("Count of 1's is odd");
    }
    return 0;
}
