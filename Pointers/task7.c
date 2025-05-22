#include <stdio.h>
#include <stdlib.h>
int func(int *arr,int size){
    int res=0;
    for(int i=0;i<size;++i){
        res^=arr[i];
    }
    return res;
}
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));
    if(arr==NULL){
        return 1;
    }
    printf("Enter array");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }
    int res=func(arr,size);
    printf("%d",res);
    return 0;
}
