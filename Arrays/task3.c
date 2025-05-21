#include <stdio.h>
#include <stdlib.h>
int func(int *arr1,int *arr2,int size){
    for(int i=0;i<size;++i){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }return 1;
}
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int *arr1=(int*)malloc(size*sizeof(int));
    if(arr1==NULL){
        return 1;
    }
    int *arr2=(int*)malloc(size*sizeof(int));
    if(arr2==NULL){
        return 1;
    }
    printf("Enter first array");
    for(int i=0;i<size;++i){
        scanf("%d",&arr1[i]);
    }
    printf("Enter second array");
    for(int i=0;i<size;++i){
        scanf("%d",&arr2[i]);
    }
    if(func(arr1,arr2,size)){
        printf("Arrays are the same\n");
    }else{
        printf("Arrays are not the same\n");
    }free(arr1);
    free(arr2);
    return 0;
    
}
