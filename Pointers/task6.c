#include <stdio.h>
#include <stdlib.h>
int func(int *arr,int size){
    if(size<2){
        return size;
    }
    int k=1;
    for(int i=1;i<size;++i){
        if(arr[i]!=arr[k-1]){
            arr[k++]=arr[i];
        }
    }
    return k;
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
    int newSize=func(arr,size);
    printf("New size: %d\n",newSize);
    for(int i=0;i<newSize;++i){
        printf("%d",arr[i]);
    }printf("\n");
    free(arr);
    return 0;
}
