#include <stdio.h>
int fib(int num){
    if(num>=0 && num<2){
        return num;
    }
    return fib(num-1) + fib(num-2);
}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    printf("%d\n",fib(num));
    return 0;
}
