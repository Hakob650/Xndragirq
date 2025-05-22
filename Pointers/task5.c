#include <stdio.h>
#include <stdlib.h>
int func(int *arr,int size,int val){
    int k=0;
    for(int i=0;i<size;++i){
        if(arr[i]!=val){
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
    int val;
    printf("Enter value");
    scanf("%d",&val);
    int newSize=func(arr,size,val);
    printf("New size: %d\n",newSize);
    for(int i=0;i<newSize;++i){
        printf("%d ",arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
