#include <stdio.h>
int main(){
    int num,i;
    printf("Enter number");
    scanf("%d",&num);
    int arr[32];
    for(i=0;i<32;++i){
        arr[i]=0;
    }
    if(num==0){
        printf("Binary: 0");
    }
    i=0;
    while(num>0){
        arr[i]=num%2;
        num/=2;
        i++;
    }
    printf("Binary: ");
    for(int j=31;j>=0;--j){
        printf("%d",arr[j]);
    }printf("\n");
    return 0;
}
