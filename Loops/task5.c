#include <stdio.h>
int main(){
    int r_h=5;
    int h_h=6;
    int w=r_h*2;
    for(int i=1;i<=r_h;++i){
        for(int j=1;j<r_h-i;++j){
            printf(" ");
        }printf("*");
        if(i<r_h){
            for(int j=1;j<2*(i-1);++j){
                printf(" ");
            }
         }else{
             for(int j=1;j<2*(i-1);++j){
                 printf("*");
             }
         }
        if(i>1){
            printf("*");
        }printf("\n");
    }
        for(int i=1;i<=h_h;++i){
            printf("*");
                for(int j=2;j<w;++j){
                    printf(" ");
                }printf("*\n");
        }
        for(int i=1;i<=w;++i){
            printf("*");
        }printf("\n");
        return 0;
}
