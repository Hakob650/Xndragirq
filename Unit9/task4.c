#include <stdio.h>
#include <stdlib.h>
int isprime(int num){
    if(num<2){
        return 0;
    }
    for(int i=2;i*i<num;++i){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int* func(int *arr1,int size1,int *arr2,int size2,int *newsize){
    int *arr3=(int*)malloc((size1+size2)*sizeof(int));
    if(arr3==NULL){
        return NULL;
    }
    int count=0;
    for(int i=0;i<size1;++i){
        if(isprime(arr1[i])){
            arr3[count++]=arr1[i];
        }
    }
    for(int i=0;i<size2;++i){
        if(isprime(arr2[i])){
            arr3[count++]=arr2[i];
        }
    }
    *newsize=count;
    return arr3;
}
int main(){
    int size1;
    printf("Enter size");
    scanf("%d",&size1);
    int *arr1=(int*)malloc(size1*sizeof(int));
    if(arr1==NULL){ 
        return 1;
    }
    printf("Enter array 1");
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
    printf("Enter array 2");
    for(int i=0;i<size2;++i){
        scanf("%d",&arr2[i]);
    }
    int newsize;
    int *arr3=func(arr1,size1,arr2,size2,&newsize);
    printf("New Array\n");
    for(int i=0;i<newsize;++i){
        printf("%d ",arr3[i]);
    }printf("\n");
    free(arr1);
    free(arr2);
    free(arr3);
    return 0;
}


    
        
