#include <stdio.h>
#define pi 3.1415
int main(){
        int r;
        float d,c,a;
        printf("enter the radius of circle\n");
        scanf("%d",r);
        d=2*r;
        c=2*pi*r;
        a=pi*r*r;
        printf("diameter is %f\n",d);
        printf("circumference is %f\n",c);
        printf("area is %F\n",a);
	return 0;
}
