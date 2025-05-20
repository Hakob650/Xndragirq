#include <stdio.h>
int main(){
    int number;
    printf("Enter Number");
    scanf("%d",&number);
    if(number>0){
        number<<=1;
    }
    printf("%d",number);
    return 0;
}
