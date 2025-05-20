#include <stdio.h>
int main(){
    int number;
    printf("Enter Number");
    scanf("%d",&number);
    if(number>0 && (number&(number-1))==0){
        printf("Number is a power of 2");
    }else{
        printf("Number is not a power of 2");
    }
    return 0;
}
