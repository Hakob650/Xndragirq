#include <stdio.h>
#include <stdlib.h>
void* my_realloc(void *addr,int oldsize,int newsize){
    if(newsize==0){
        free(addr);
        return NULL;
    }
    if(addr==NULL){
        return malloc(newsize);
    }
    if(oldsize==newsize){
        return addr;
    }
    void *newaddr=malloc(newsize);
    if(newaddr==NULL){
        return NULL;
    }
    int minsize=oldsize<newsize ? oldsize:newsize;
    for(int i=0;i<minsize;++i){
        ((char*)newaddr)[i]=((char*)addr)[i];
    }
    free(addr);
    return newaddr;
}
int main(){
    int *arr=(int*)malloc(5*sizeof(int));
    if(arr==NULL){
        return 1;
    }
    for(int i=0;i<5;++i){
        arr[i]=i+1;
    }
    for(int i=0;i<5;++i){
        printf("%d ",arr[i]);
    }printf("\n");
    arr=(int*)my_realloc(arr,5*sizeof(int),10*sizeof(int));
    for(int i=5;i<10;++i){
        arr[i]=i+1;
    }
    for(int i=0;i<10;++i){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}


        
