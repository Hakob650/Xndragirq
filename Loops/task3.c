#include <stdio.h>
void func(int num){
    char hex_digits[]="0123456789ABCDEF";
    char hex[50];
    int i=0;
    if(num==0){
	printf("Hex: 0");
 	return;
    }
    while(num!=0){
	hex[i]=hex_digits[num%16];
	num/=16;
	++i;
    }
    printf("Hex: ");
    for(int j=i-1;j>=0;--j){
	printf("%c",hex[j]);
    }printf("\n");
}int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    func(num);
    return 0;
}
