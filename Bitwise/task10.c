#include <stdio.h>
unsigned int func(unsigned int num){
    unsigned int res=0;
    for(int i=0;i<32;++i){
        res<<=1;
        res|=(num&1);
        num>>=1;
    }
    return res;
}
int main(){
    unsigned int num;
    printf("Enter Number");
    scanf("%u",&num);
    unsigned int res=func(num);
    printf("%u\n",res);
    return 0;
}
