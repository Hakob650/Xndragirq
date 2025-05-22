#include <stdio.h>
#include <stdlib.h>
int *func(int *arr1,int size1,int *arr2,int size2){
    int *arr3=(int*)malloc((size1+size2)*sizeof(int));
    if(arr3==NULL){
        return NULL;
    }
    int i=0,j=0,k=0;
    while(i<size1 || j<size2){
        if(i<size1){
            arr3[k++]=arr1[i++];
        }
        if(j<size2){
            arr3[k++]=arr2[j++];
        }
    }
    return arr3;
}
int main(){
    int size1;
    printf("Enter size1");
    scanf("%d",&size1);
    int *arr1=(int*)malloc(size1*sizeof(int));
    if(arr1==NULL){ 
        return 1;
    }
    printf("Array 1");
    for(int i=0;i<size1;++i){
        scanf("%d",&arr1[i]);
    }
    int size2;
    printf("Enter size2");
    scanf("%d",&size2);
    int *arr2=(int*)malloc(size2*sizeof(int));
    if(arr2==NULL){
        return 1;
    }
    printf("Array 2");
    for(int i=0;i<size2;++i){
        scanf("%d",&arr2[i]);
    }
    int *arr3=func(arr1,size1,arr2,size2);
    printf("New array\n");
    for(int i=0;i<size1+size2;++i){
        printf("%d ",arr3[i]);
    }printf("\n");
    free(arr1);
    free(arr2);
    free(arr3);
    return 0;
}

    
