#include <stdio.h>
#include <stdlib.h>
void* my_calloc(int byte_count,int element_count){
    if(byte_count==0 || element_count==0){
        return NULL;
    }
    size_t total_size=byte_count*element_count;
    void *ptr=malloc(total_size);
    if(ptr==NULL){
        return NULL;
    }
    for(size_t i=0;i<total_size;++i){
        ((char*)ptr)[i]=0;
    }
    return ptr;
}
int main(){
    int *arr=(int*)my_calloc(sizeof(int),10);
    if(arr!=NULL){
        for(int i=0;i<10;++i){
            printf("%d  ",arr[i]);
        }printf("\n");
        free(arr);
    }else{
        printf("Allocation error\n");
    }
    return 0;
}


