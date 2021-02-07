#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter two number :\n");
    scanf("%d,%d,&y,&z");
    x=y+z;
    printf("\naddition of two number:%d",x);
    x=y-z;
    printf("\nsubstractin of two number:%d",x);
    x=y*z;
    printf("\nmultiplication of two numbers:%d");
    x=y/z;
    printf("\ndivision of two numbers:%d",x);
    x=y%z;
    printf("\nmodulo of two numbers:%d",x);
	return 0;
}
