#include <stdio.h>
int func(int num){
    int reversed=0;
    while(num!=0){
        reversed=reversed*10+(num%10);
        num/=10;
    }
    return reversed;
}
int Func(int num){
    return num==func(num);
}
int func1(int num){
    int steps=0;
    while(!Func(num)){
        int rev=func(num);
        num=num+rev;
        steps++;
    }
    return steps;
}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    int steps=func1(num);
    printf("%d\n",steps);
    return 0;
}
