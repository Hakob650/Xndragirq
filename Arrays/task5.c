#include <stdio.h>
#include <stdlib.h>
int func(int *arr,int size){
    for(int i=0;i<size;++i){
        if(arr[i]<arr[i+1]){
            return 0;
        }
    }return 1;
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
    if(func(arr,size)){
        printf("Array is sorted in descending order\n");
    }else{
        printf("Array is not sorted in descending order\n");
    }
    return 0;

}
