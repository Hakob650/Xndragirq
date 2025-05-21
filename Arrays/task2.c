#include <stdio.h>
#include <stdlib.h>
void func(int *arr,int size){
    int *res=(int*)malloc(size*sizeof(int));
    if(res==NULL){
        return;
    }
    int s=0,e=size-1;
    for(int i=0;i<size;++i){
        if(arr[i]%2==0){
            res[s++]=arr[i];
        }else{
            res[e--]=arr[i];
        }
    }
    for(int i=0;i<size;++i){
        arr[i]=res[i];
    }free(res);
}
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));
    if(arr==NULL){
        return 1;
    }
    printf("Enter the array");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }
    func(arr,size);
    printf("Rearranged array");
    for(int i=0;i<size;++i){
        printf("%d ",arr[i]);
    }printf("\n");
    free(arr);
    return 0;
}
