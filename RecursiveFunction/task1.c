#include <stdio.h>
#include <stdlib.h>
void func(int *arr,int size){
	if(size==0){
		return;
	}
	printf("%d",arr[size-1]);
	func(arr,size-1);
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
	printf("Reversed: ");
	func(arr,size);
	printf("\n");
	return 0;
}

