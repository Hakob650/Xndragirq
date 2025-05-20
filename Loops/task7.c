#include <stdio.h>
int main(){
    int n,curr=1;
    printf("Enter number");
    scanf("%d",&n);
    for(int i=1;curr<=n;++i){
        for(int j=1;j<=i && curr<=n;++j){
            printf("%d",curr++);
        }printf("\n");
    }return 0;
}
