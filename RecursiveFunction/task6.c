#include <stdio.h>
void func(int num){
    if(num==0){
        return;
    }
    func(num/2);
    printf("%d",num%2);
    
}
int main(){
        int num;
        printf("Enter number");
        scanf("%d",&num);
        if(num==0){
                printf("0");
        }else{
                func(num);
        }
        return 0;
}
