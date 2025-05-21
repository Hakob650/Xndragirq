#include <stdio.h>
#include <stdlib.h>
int func(int *arr,int size){
    int total=size*(size+1)/2;
    int sum=0;
    for(int i=0;i<size;++i){
        sum+=arr[i];
    }
    return total-sum;
}
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int *arr=(int*)malloc((size-1)*sizeof(int));
    if(arr==NULL){
        return 1;
    }
    printf("Enter array");
    for(int i=0;i<size-1;++i){
        scanf("%d",&arr[i]);
    }
    int res=func(arr,size);
    printf("%d",res);
    free(arr);
    return 0;
}
