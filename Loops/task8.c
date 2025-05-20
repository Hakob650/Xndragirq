#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
bool func(int n){
	n=abs(n);
	if(n<100){
		return true;
	}
	int d[20];
	int len=0;
	while(n>0){
		d[len++]=n%10;
		n/=10;
	}
	for(int i=0;i<len/2;++i){
		int tmp=d[i];
		d[i]=d[len-i-1];
		d[len-i-1]=tmp;
	}
	int diff=d[1]-d[0];
	for(int i=2;i<len;++i){
		if(d[i]-d[i-1]!=diff){
			return false;
		}
	}
	return true;
}
int main(){
	printf("%d\n",func(123456));
	printf("%d\n",func(963));
	printf("%d\n",func(13579));
	printf("%d\n",func(12334));
	return 0;
}

