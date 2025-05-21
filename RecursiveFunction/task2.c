#include <stdio.h>
int func(int num){
	if(num==0){
		return 0;
	}
	return num%10+func(num/10);
}
int main(){
	int num;
	printf("Enter number");
	scanf("%d",&num);
	int res=func(num);
	printf("%d\n",res);
	return 0;
}
