#include <stdio.h>
int func(int a,int b,int c){
    if( a*a + b*b == c*c ) {
        return 1;
    }else if ( b*b + c*c == a*a ) {
        return 1;
    }else ifi ( c*c + a*a == b*b ) {
        return 1;
    }
    return 0;
}
int main(){
    int a,b,c;
    printf("Enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    int res=func(a,b,c);
    printf("%d",res);
    return 0;
}
