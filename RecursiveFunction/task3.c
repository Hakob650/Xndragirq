#include <stdio.h>
int gcd(int x,int y){
	if(y==0){
		return x;
	}
	return gcd(y,x%y);
}
int main(){
	int x,y;
	printf("Enter numbers");
	scanf("%d %d",&x,&y);
	int res=gcd(x,y);
	printf("%d\n",res);
	return 0;
}
