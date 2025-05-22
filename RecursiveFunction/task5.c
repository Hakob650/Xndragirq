#include <stdio.h>
#include <stdlib.h>
int func(int *arr,int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid=low+(high-low)/2;
    if(arr[mid]==target){
        return mid;
    }else if(arr[mid]<target){
        return func(arr,mid+1,high,target);
    }else{
        return func(arr,low,mid-1,target);
    }
    return mid;
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
    int low=0;
    int high=size-1;
    int target;
    printf("Enter target to search");
    scanf("%d",&target);
    int res=func(arr,low,high,target);
    printf("%d",res);
    free(arr);
    return 0;
}
    
