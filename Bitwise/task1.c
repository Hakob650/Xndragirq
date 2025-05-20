#include <stdio.h>
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    int reversed=0;
    int original=num;
    while(num!=0){
        reversed=reversed*10+num%10;
        num/=10;
    }
    if(original==reversed){
        printf("Number is palindrome\n");
    }else{
        printf("Number is not palindrome\n");
    }
    return 0;
​
}
