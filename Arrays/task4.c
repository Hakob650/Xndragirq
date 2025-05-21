#include <stdio.h>
#include <stdlib.h>
int func(int *arr,int size,int target){
    for(int i=0;i<size;++i){
        if(arr[i]==target){
            return i;
        }
    }return -1;
}
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int target;
    printf("Enter target");
    scanf("%d",&target);
    int *arr=(int*)malloc(size*sizeof(int));
    if(arr==NULL){
        return 1;
    }
    printf("Enter the array");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }
    int res=func(arr,size,target);
    printf("%d\n",res);
    return 0;
}
