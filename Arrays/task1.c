#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  char *arr=NULL;
  int size=0;
  int len;
  printf("Enter size of arr");
  scanf("%d",&size);
  getchar();
  arr=(char*)malloc((size+1)*sizeof(char));
  if(arr==NULL){
      return 1;
  }
  for(int i=0;i<size;++i){
      arr[i]=getchar();
  }
  arr[size]='\0';
  getchar();
  printf("Original: %s\n",arr);
  for(int i=0;i<size/2;++i){
      char tmp=arr[i];
      arr[i]=arr[size-1-i];
      arr[size-1-i]=tmp;
  }
  printf("Reversed: %s\n",arr);
  free(arr);
  return 0;
}
